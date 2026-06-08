/*
 * XREFs of RegisterHvFeedbackCountersCallback @ 0x140030630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     DecodeGenAddressToHvPerfReg @ 0x14002FEFC (DecodeGenAddressToHvPerfReg.c)
 */

__int64 __fastcall RegisterHvFeedbackCountersCallback(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // edx
  __int64 v4; // r8
  _BYTE *v5; // rax
  int v6; // esi
  _DWORD *Pool2; // r12
  _QWORD *v8; // rcx
  __int64 v9; // r9
  _DWORD *v10; // r15
  _DWORD *v11; // r13
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 v15; // rsi
  _DWORD *v16; // rcx
  _DWORD *v17; // rdx
  bool v18; // al
  __int64 (__fastcall *v19)(__int64, char, _QWORD *, _QWORD *); // rax
  __int64 v20; // rcx
  int LpIndexFromProcessorIndex; // eax
  __int64 i; // rcx
  __int64 v23; // rax
  _QWORD *v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h]
  __int64 v28; // [rsp+48h] [rbp-30h]
  _DWORD *P; // [rsp+50h] [rbp-28h]
  __int128 v30; // [rsp+58h] [rbp-20h] BYREF
  __int64 v31; // [rsp+68h] [rbp-10h]
  unsigned int v32; // [rsp+C0h] [rbp+48h]
  int v33; // [rsp+C8h] [rbp+50h]
  __int64 v34; // [rsp+D0h] [rbp+58h]
  __int64 v35; // [rsp+D8h] [rbp+60h]

  v2 = 0;
  LODWORD(v31) = 0;
  v30 = 0LL;
  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 )
  {
    v4 = v3;
    v5 = (_BYTE *)(*(_QWORD *)(a1 + 560) + 16LL);
    do
    {
      if ( v5[1] && *v5 )
        ++v2;
      v5 += 24;
      --v4;
    }
    while ( v4 );
    if ( v2 )
    {
      P = (_DWORD *)ExAllocatePool2(64LL, 32 * *(_DWORD *)(a1 + 16) * (unsigned int)v2, 1919119952LL);
      if ( !P )
        return (unsigned int)-1073741670;
      Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(104 * *(_DWORD *)(a1 + 16)), 1919119952LL);
      if ( Pool2 )
      {
        v8 = *(_QWORD **)(a1 + 576);
        v9 = *(_QWORD *)(a1 + 568);
        v10 = Pool2;
        v11 = P;
        LODWORD(v12) = 0;
        v25 = v8;
        v35 = v9;
        while ( 1 )
        {
          v32 = v12;
          if ( (unsigned int)v12 >= *(_DWORD *)(a1 + 16) )
            break;
          *v10 = 0;
          v13 = 0LL;
          while ( 1 )
          {
            v33 = v13;
            if ( (unsigned int)v13 >= *(_DWORD *)(a1 + 36) )
              break;
            v14 = *(_QWORD *)(a1 + 560);
            if ( *(_BYTE *)(v14 + 24 * v13 + 17) && *(_BYTE *)(v14 + 24 * v13 + 16) )
            {
              v26 = *v8;
              v15 = *v8 + 56LL;
              v28 = v15;
              v16 = &v10[4 * *v10 + 2 + 2 * *v10];
              v12 = v32;
              v34 = (__int64)v16;
              if ( *(void (__fastcall **)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))(v26 + 48) == GetCpcDifferentialFeedback )
              {
                v27 = *(_QWORD *)v15;
                v6 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(*(_QWORD *)v15 + 296LL), (__int64)(v16 + 2));
                if ( v6 < 0 )
                  goto LABEL_45;
                v6 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(v27 + 272), v34);
                if ( v6 < 0 )
                  goto LABEL_45;
                v15 = v28;
                v18 = 0;
                v16 = v17;
              }
              else
              {
                v19 = *(__int64 (__fastcall **)(__int64, char, _QWORD *, _QWORD *))(v14 + 24 * v13);
                *((_QWORD *)v16 + 1) = 0x100040000000E8LL;
                *(_QWORD *)v16 = 0x100040000000E7LL;
                v18 = v19 != PerfReadWrappingCounter;
              }
              v9 = v35;
              *((_BYTE *)v16 + 16) = v18;
              v20 = 32 * v12;
              if ( *(_DWORD *)(32 * v12 + v35 + 28) )
              {
                v11[1] = -1;
                LpIndexFromProcessorIndex = *(_DWORD *)(v20 + v35);
              }
              else
              {
                v11[1] = *(_DWORD *)(v20 + v35);
                LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex();
                LODWORD(v13) = v33;
                LODWORD(v12) = v32;
                v9 = v35;
              }
              v11[2] = LpIndexFromProcessorIndex;
              *v11 = *v10;
              *(_QWORD *)v15 = v11;
              *(_QWORD *)(v26 + 48) = PerfHvReadFeedback;
              ++*v10;
              v8 = v25;
              v11 += 8;
            }
            v13 = (unsigned int)(v13 + 1);
            v25 = ++v8;
          }
          if ( *(_BYTE *)(a1 + 13) && qword_140019400 )
          {
            v6 = qword_140019400(*(_QWORD *)(32LL * (unsigned int)v12 + v9 + 8));
            if ( v6 < 0 )
            {
              *(_BYTE *)(a1 + 13) = 0;
              goto LABEL_45;
            }
            LODWORD(v12) = v32;
            v9 = v35;
            v8 = v25;
          }
          v10 += 26;
          LODWORD(v12) = v12 + 1;
        }
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 36); i = (unsigned int)(i + 1) )
        {
          v23 = *(_QWORD *)(a1 + 560);
          if ( *(_BYTE *)(v23 + 24 * i + 17) && *(_BYTE *)(v23 + 24 * i + 16) )
            *(_BYTE *)(v23 + 24 * i + 16) = 0;
        }
        LODWORD(v30) = 82;
        *((_QWORD *)&v30 + 1) = Pool2;
        v31 = a1;
        if ( qword_140019500 )
        {
          v6 = qword_140019500(&v30);
          if ( v6 >= 0 )
            goto LABEL_46;
        }
        else
        {
          v6 = -1073741822;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x12u,
            (__int64)&WPP_a233770b61303cb7b038d705208677fa_Traceguids,
            v6);
      }
      else
      {
        v6 = -1073741670;
      }
LABEL_45:
      ExFreePoolWithTag(P, (ULONG)1919119952);
      if ( !Pool2 )
        return (unsigned int)v6;
LABEL_46:
      ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      return (unsigned int)v6;
    }
  }
  *((_QWORD *)&v30 + 1) = 0LL;
  LODWORD(v30) = 82;
  v31 = a1;
  if ( qword_140019500 )
  {
    v6 = qword_140019500(&v30);
    if ( v6 >= 0 )
      return (unsigned int)v6;
  }
  else
  {
    v6 = -1073741822;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x11u,
      (__int64)&WPP_a233770b61303cb7b038d705208677fa_Traceguids,
      v6);
  return (unsigned int)v6;
}
