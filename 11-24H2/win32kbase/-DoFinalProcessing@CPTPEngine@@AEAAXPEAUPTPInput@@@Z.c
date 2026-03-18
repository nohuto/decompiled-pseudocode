/*
 * XREFs of ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB07C
 * Callers:
 *     ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400CAF50 (-ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1400CD1A8 (-IsTouchpadActive@CPTPEngine@@AEAAHXZ.c)
 *     ?SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z @ 0x1400CD2B0 (-SendMouseUpIfPending@CPTPEngine@@AEAAXPEAI@Z.c)
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400CDB34 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 *     ?SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z @ 0x140126A24 (-SendInertiaOutput@CBasePTPEngine@@IEAAXW4Action@Inertia@Payload@PTPEngineOutput@@@Z.c)
 */

void __fastcall CPTPEngine::DoFinalProcessing(CPTPEngine *this, struct PTPInput *a2)
{
  __int64 v4; // r14
  unsigned int v5; // r9d
  char *v6; // r8
  __int64 v7; // rdx
  int v8; // ecx
  unsigned int v9; // ecx
  unsigned int i; // edx
  unsigned int v11; // r8d
  unsigned int v12; // edx
  const signed __int32 *v13; // rcx
  char *v14; // rsi
  int v15; // r10d
  int v16; // ecx
  _BYTE v17[24]; // [rsp+20h] [rbp-40h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  v4 = 6LL;
  if ( !*((_DWORD *)a2 + 9) )
  {
    v5 = 0;
    if ( *((_DWORD *)a2 + 12) )
    {
      v6 = (char *)a2 + 68;
      do
      {
        v7 = 328LL * (unsigned int)(*((_DWORD *)v6 - 2) % *((_DWORD *)this + 4));
        v8 = *(_DWORD *)((char *)this + v7 + 816);
        if ( (v8 & 1) != 0 && *(_DWORD *)v6 )
        {
          if ( (*(_DWORD *)v6 & 0x40000) != 0 )
          {
            v9 = v8 & 0xFFFFFFFE;
            *(_DWORD *)((char *)this + v7 + 816) = v9;
            if ( (*(_DWORD *)v6 & 0x2000000) != 0 )
              ++*((_DWORD *)this + 703);
            else
              *(_DWORD *)((char *)this + v7 + 816) = v9 & 0xDFFFFFFF;
          }
          else
          {
            *(_QWORD *)((char *)this + v7 + 896) = *(_QWORD *)(v6 + 68);
            *(_QWORD *)((char *)this + v7 + 856) = *(_QWORD *)(v6 + 28);
          }
        }
        v6 += 96;
        ++v5;
      }
      while ( v5 < *((_DWORD *)a2 + 12) );
    }
    if ( *((_DWORD *)this + 706) != 2 )
      *((_DWORD *)this + 768) &= ~0x80000u;
    for ( i = 0; i < 6; ++i )
    {
      if ( (*((_DWORD *)this + 82 * i + 204) & 1) != 0 )
        goto LABEL_27;
    }
    v11 = *((_DWORD *)a2 + 12);
    v12 = 0;
    if ( v11 )
    {
      v13 = (const signed __int32 *)((char *)a2 + 68);
      while ( !_bittest(v13, 0x12u) )
      {
        ++v12;
        v13 += 24;
        if ( v12 >= v11 )
          goto LABEL_27;
      }
      *((_DWORD *)this + 768) &= 0xFF09FFFF;
      *((_DWORD *)this + 699) = 0;
      *((_DWORD *)this + 700) = 0;
      *((_DWORD *)this + 706) = 1;
      CPTPEngine::SendMouseUpIfPending(this, (unsigned int *)this + 697);
      if ( *((_DWORD *)a2 + 10) || *((_DWORD *)a2 + 13) )
      {
        CBasePTPEngine::SendInertiaOutput(this, 3LL);
        *((_DWORD *)a2 + 10) = 0;
      }
      *(_QWORD *)v17 = *(_QWORD *)a2;
      *(_OWORD *)&v17[8] = 0LL;
      v18 = *(_OWORD *)v17;
      v19 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v17[8], *(__m128d *)&v17[8]);
      CBasePTPEngine::SendTelemetryOutput(this, 1LL, &v18);
    }
  }
LABEL_27:
  v14 = (char *)this + 816;
  do
  {
    if ( (*(_DWORD *)v14 & 0x20000000) != 0 && *((_QWORD *)v14 + 39) != *(_QWORD *)a2 )
    {
      v18 = 0LL;
      v19 = 0LL;
      CBasePTPEngine::SendTelemetryOutput(this, 11LL, &v18);
      *(_DWORD *)v14 &= 0xDFFFFFFE;
    }
    v14 += 328;
    --v4;
  }
  while ( v4 );
  if ( (unsigned int)CPTPEngine::IsTouchpadActive(this) )
  {
    if ( (v15 & 1) != 0 || (v15 & 2) != 0 || (v15 & 4) != 0 || *((_DWORD *)this + 762) || *((_DWORD *)this + 706) != 1 )
    {
      v16 = 0;
    }
    else
    {
      v16 = 0x2000000;
      if ( (v15 & 0x2000000) == 0 )
      {
        v18 = 0LL;
        v19 = 0LL;
        CBasePTPEngine::SendTelemetryOutput(this, 10LL, &v18);
        *((_DWORD *)this + 768) &= 0xFB09FFFF;
        if ( *((_DWORD *)a2 + 10) || (v16 = 0x2000000, *((_DWORD *)a2 + 13)) )
        {
          CBasePTPEngine::SendInertiaOutput(this, 3LL);
          *((_DWORD *)a2 + 10) = 0;
          v16 = 0x2000000;
        }
      }
    }
    *((_DWORD *)this + 768) = v16 | *((_DWORD *)this + 768) & 0xFDFFFFFF;
  }
  else
  {
    v18 = 0LL;
    *((_DWORD *)this + 768) = v15 & 0xF9FFFFFF | 0x2000000;
    v19 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 9LL, &v18);
  }
}
