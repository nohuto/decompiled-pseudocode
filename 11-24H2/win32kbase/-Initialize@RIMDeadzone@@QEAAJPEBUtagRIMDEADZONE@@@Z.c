/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1401EA2B8
 * Callers:
 *     RIMCreatePointerDeviceDeadzone @ 0x1401D9FE0 (RIMCreatePointerDeviceDeadzone.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1401254D0 (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1401EAA68 (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this, const struct tagRIMDEADZONE *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r10d
  unsigned int v6; // r8d
  __int64 v7; // rbp
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  unsigned int v13; // r14d
  __int64 v14; // rbp
  unsigned int i; // r9d
  __int64 v16; // rdx
  __int128 v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-28h]

  v2 = 0;
  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 390);
  ++*((_DWORD *)this + 1);
  if ( !a2 )
    goto LABEL_26;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *((_DWORD *)a2 + 4) >= *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) >= *((_DWORD *)a2 + 3) )
    {
      *((_DWORD *)this + 4) = 1;
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 8);
      return v2;
    }
LABEL_26:
    v2 = -1073741811;
    goto LABEL_27;
  }
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_26;
  v5 = *((_DWORD *)a2 + 4);
  v6 = 0;
  if ( v5 )
  {
    v7 = *((_QWORD *)a2 + 1);
    do
    {
      v8 = _mm_cvtsi128_si32(*(__m128i *)(v7 + 24LL * v6));
      v18 = *(_OWORD *)(v7 + 24LL * v6);
      v19 = *(_QWORD *)(v7 + 24LL * v6 + 16);
      if ( v8 > 0x168 || DWORD1(v18) > 0x168 || v8 == DWORD1(v18) )
        goto LABEL_26;
      v9 = 0;
      if ( (_DWORD)v19 )
      {
        while ( *(_DWORD *)(*((_QWORD *)&v18 + 1) + 8LL * v9 + 4) >= *(_DWORD *)(*((_QWORD *)&v18 + 1) + 8LL * v9) )
        {
          if ( ++v9 >= (unsigned int)v19 )
            goto LABEL_14;
        }
        goto LABEL_26;
      }
LABEL_14:
      ;
    }
    while ( ++v6 < v5 );
  }
  *((_DWORD *)this + 4) = 2;
  v10 = *((unsigned int *)a2 + 4);
  *((_DWORD *)this + 8) = v10;
  v11 = Win32AllocPoolZInitImpl(256LL, 24 * v10, 0x6E7A4452u);
  *((_QWORD *)this + 3) = v11;
  v12 = v11;
  if ( !v11 )
  {
LABEL_16:
    v2 = -1073741801;
LABEL_27:
    RIMDeadzone::Release((char **)this);
    return v2;
  }
  v13 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    do
    {
      v14 = 3LL * v13;
      *(_QWORD *)(v12 + 8 * v14) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * v13);
      *(_DWORD *)(*((_QWORD *)this + 3) + 8 * v14 + 16) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 24LL * v13 + 16);
      *(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v13 + 8) = Win32AllocPoolZInitImpl(
                                                              256LL,
                                                              8LL
                                                            * *(unsigned int *)(*((_QWORD *)this + 3) + 24LL * v13 + 16),
                                                              0x6E7A4452u);
      v12 = *((_QWORD *)this + 3);
      if ( !*(_QWORD *)(v12 + 24LL * v13 + 8) )
        goto LABEL_16;
      for ( i = 0; i < *(_DWORD *)(v12 + 24LL * v13 + 16); v12 = *((_QWORD *)this + 3) )
      {
        v16 = i++;
        *(_QWORD *)(*(_QWORD *)(v12 + 24LL * v13 + 8) + 8 * v16) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1)
                                                                                         + 24LL * v13
                                                                                         + 8)
                                                                             + 8 * v16);
      }
    }
    while ( ++v13 < *((_DWORD *)this + 8) );
  }
  RIMDeadzone::SetDeadzonePalmTelemetry(this);
  return v2;
}
