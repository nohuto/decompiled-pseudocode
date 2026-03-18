/*
 * XREFs of _lambda_e1b7d727f4d9425d1205377adb72da73_::operator() @ 0x1401F6400
 * Callers:
 *     ?GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z @ 0x1401FC890 (-GenerateDeparturesForActivePointers@CTouchProcessor@@QEAA_NPEAURIMDEV@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_DWORD *__fastcall lambda_e1b7d727f4d9425d1205377adb72da73_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  _DWORD *result; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r8d
  __int128 v11; // xmm1
  __int64 v12; // r9
  __int64 v13; // r10
  __int128 v14; // xmm1
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // eax

  v3 = 192 * *(_DWORD *)(a2 + 48) + 240;
  result = (_DWORD *)Win32AllocPoolZInitImpl(256LL, v3, 0x66637352u);
  v5 = result;
  if ( result )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 256) + 16LL);
    *result = v3;
    v7 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(a2 + 256) + 368LL), 4);
    result[48] = v7;
    if ( v7 )
      v8 = *(_QWORD *)(v6 + 24);
    else
      v8 = *(_QWORD *)(v6 + 16);
    *((_QWORD *)v5 + 4) = v8;
    v9 = 0;
    v10 = 0;
    *((_OWORD *)v5 + 3) = *(_OWORD *)(a2 + 72);
    *((_OWORD *)v5 + 4) = *(_OWORD *)(a2 + 88);
    *((_OWORD *)v5 + 5) = *(_OWORD *)(a2 + 104);
    *((_OWORD *)v5 + 6) = *(_OWORD *)(a2 + 120);
    *((_OWORD *)v5 + 7) = *(_OWORD *)(a2 + 136);
    *((_OWORD *)v5 + 8) = *(_OWORD *)(a2 + 152);
    *((_OWORD *)v5 + 9) = *(_OWORD *)(a2 + 168);
    *((_OWORD *)v5 + 10) = *(_OWORD *)(a2 + 184);
    v11 = *(_OWORD *)(a2 + 200);
    *((_QWORD *)v5 + 29) = v5 + 60;
    for ( *((_OWORD *)v5 + 11) = v11; v10 < *(_DWORD *)(a2 + 48); ++v10 )
    {
      v12 = 480LL * v10 + *(_QWORD *)(a2 + 240) + 160LL;
      if ( (*(_DWORD *)(v12 + 20) & 2) != 0 )
      {
        v13 = *((_QWORD *)v5 + 29) + 192LL * v9;
        *(_OWORD *)(v13 + 8) = *(_OWORD *)v12;
        *(_OWORD *)(v13 + 24) = *(_OWORD *)(v12 + 16);
        *(_OWORD *)(v13 + 40) = *(_OWORD *)(v12 + 32);
        *(_OWORD *)(v13 + 56) = *(_OWORD *)(v12 + 48);
        *(_OWORD *)(v13 + 72) = *(_OWORD *)(v12 + 64);
        *(_OWORD *)(v13 + 88) = *(_OWORD *)(v12 + 80);
        *(_OWORD *)(v13 + 104) = *(_OWORD *)(v12 + 96);
        v14 = *(_OWORD *)(v12 + 112);
        v15 = v12 + 128;
        *(_OWORD *)(v13 + 120) = v14;
        *(_OWORD *)(v13 + 136) = *(_OWORD *)v15;
        *(_OWORD *)(v13 + 152) = *(_OWORD *)(v15 + 16);
        *(_OWORD *)(v13 + 168) = *(_OWORD *)(v15 + 32);
        *(_QWORD *)(v13 + 184) = *(_QWORD *)(v15 + 48);
        *(_QWORD *)(v13 + 32) = *((_QWORD *)v5 + 4);
        v16 = *(_DWORD *)(v13 + 28);
        if ( (v16 & 4) != 0 )
          v17 = v16 & 0xFFF8FFFF | 0x40000;
        else
          v17 = v16 & 0xFFF9FFFF | 0x20000;
        *(_DWORD *)(v13 + 28) = v17 & 0xFFFF3FE8 | 0x8000;
        ++v9;
      }
    }
    v5[6] = v9;
    if ( !v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 16481);
    if ( !v5[6] )
    {
      GreDeleteFastMutex((char *)v5);
      return 0LL;
    }
    return v5;
  }
  return result;
}
