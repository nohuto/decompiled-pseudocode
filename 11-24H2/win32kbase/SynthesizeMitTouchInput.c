/*
 * XREFs of SynthesizeMitTouchInput @ 0x140218E34
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1401B8EC0 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1401221F4 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ConvertPointCoordinates @ 0x1401584C4 (ConvertPointCoordinates.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x140203D88 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x140218CB0 (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeMitTouchInput(unsigned int *a1)
{
  char v1; // r12
  __int64 v3; // rcx
  __int64 UserSessionState; // rax
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // r15
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int *v15; // rax
  char *v16; // rcx
  __int64 v17; // rbx
  __int128 v18; // xmm6
  __int64 v19; // rcx
  __int128 v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rax
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // ebx
  unsigned int v30; // esi
  unsigned int v31; // edi
  PERESOURCE *v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  struct tagTHREADINFO *v36; // rax
  struct tagTHREADINFO *v37; // rax
  __int128 v39; // [rsp+30h] [rbp-50h] BYREF
  void (__fastcall *v40)(char *); // [rsp+40h] [rbp-40h]
  __int128 v41; // [rsp+50h] [rbp-30h] BYREF
  __int64 v42; // [rsp+60h] [rbp-20h]
  __int64 v43; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v44; // [rsp+C8h] [rbp+48h]

  v1 = 1;
  if ( *a1 - 1 > 9 )
    return 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 19344) )
  {
    UserSessionState = W32GetUserSessionState(v3);
    if ( !HMValidateHandleNoSecure(*(_QWORD *)(UserSessionState + 19384), 19) )
      *(_QWORD *)(W32GetUserSessionState(v3) + 19344) = 0LL;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(v3) + 19344) && !(unsigned int)CreateInjectionDevice(v5) )
    return 0;
  v6 = Win32AllocPoolWithQuotaZInitImpl(v5, 0xF0uLL, 0x7A747355u);
  v8 = Win32AllocPoolWithQuotaZInitImpl(v7, 192LL * *a1, 0x7A747355u);
  v10 = (char *)v8;
  if ( v6 && v8 )
  {
    *(_QWORD *)(v6 + 232) = v8;
    v11 = 0LL;
    v12 = *(_QWORD *)(W32GetUserSessionState(v9) + 19344);
    *(_QWORD *)(v6 + 32) = v12;
    *(_DWORD *)(v6 + 192) = 1;
    v13 = *((_QWORD *)a1 + 12);
    *(_DWORD *)(v6 + 28) = 0;
    *(_QWORD *)(v6 + 48) = v13;
    *(_DWORD *)(v6 + 24) = *a1;
    if ( *a1 )
    {
      while ( 1 )
      {
        v43 = 0LL;
        v14 = 192 * v11;
        v44 = 144 * v11;
        v15 = &a1[36 * v11];
        v16 = &v10[v14];
        *((_OWORD *)v16 + 1) = *((_OWORD *)v15 + 1);
        *((_OWORD *)v16 + 2) = *((_OWORD *)v15 + 2);
        *((_OWORD *)v16 + 3) = *((_OWORD *)v15 + 3);
        *((_OWORD *)v16 + 4) = *((_OWORD *)v15 + 4);
        *((_OWORD *)v16 + 5) = *((_OWORD *)v15 + 5);
        *((_OWORD *)v16 + 6) = *((_OWORD *)v15 + 6);
        *((_OWORD *)v16 + 7) = *((_OWORD *)v15 + 7);
        *((_OWORD *)v16 + 8) = *((_OWORD *)v15 + 8);
        *((_OWORD *)v16 + 9) = *((_OWORD *)v15 + 9);
        v17 = *((_QWORD *)v15 + 8);
        *(_QWORD *)&v10[v14 + 48] = v17;
        v18 = *(_OWORD *)(W32GetUserSessionState(&v10[192 * v11]) + 19352);
        v20 = *(_OWORD *)(W32GetUserSessionState(v19) + 19368);
        v39 = v18;
        v41 = v20;
        if ( !(unsigned int)ConvertPointCoordinates(v17, (int *)&v41, (int *)&v39, &v43) )
          break;
        v21 = v43;
        v11 = (unsigned int)(v11 + 1);
        v12 = v44;
        *(_QWORD *)&v10[v14 + 56] = v43;
        *(_QWORD *)&v10[v14 + 72] = v21;
        *(_QWORD *)&v10[v14 + 32] = *(_QWORD *)(v6 + 32);
        *(_DWORD *)&v10[v14 + 80] = *(unsigned int *)((char *)a1 + v12 + 80);
        *(_QWORD *)&v10[v14 + 96] = *(_QWORD *)((char *)a1 + v12 + 96);
        LOWORD(v21) = *(_WORD *)((char *)a1 + v12 + 20);
        *(_DWORD *)&v10[v14 + 20] = 0;
        *(_WORD *)&v10[v14 + 8] = v21;
        if ( (unsigned int)v11 >= *a1 )
          goto LABEL_12;
      }
      v1 = 0;
    }
    else
    {
LABEL_12:
      PtiCurrent(v12);
      v23 = PtiCurrent(v22);
      *(_QWORD *)&v39 = *((_QWORD *)v23 + 48);
      *((_QWORD *)v23 + 48) = &v39;
      *((_QWORD *)&v39 + 1) = v6;
      v40 = GreDeleteFastMutex;
      v24 = PtiCurrent((__int64)v23);
      *(_QWORD *)&v41 = *((_QWORD *)v24 + 48);
      *((_QWORD *)v24 + 48) = &v41;
      *((_QWORD *)&v41 + 1) = v10;
      v42 = (__int64)GreDeleteFastMutex;
      v25 = W32GetUserSessionState(v24);
      v26 = HMValidateHandleNoSecure(*(_QWORD *)(v25 + 19384), 19);
      InputTraceLogging::RIM::InjectInput(v26);
      v28 = W32GetUserSessionState(v27);
      v29 = a1[2];
      v30 = a1[3];
      v31 = a1[1];
      v32 = *(PERESOURCE **)(v28 + 3264);
      v34 = W32GetUserSessionState(v33);
      CTouchProcessor::ProcessInjectedInput(
        v32,
        *(void **)(v34 + 19344),
        (struct RIMCOMPLETEFRAME *)v6,
        v31 != 0,
        v30,
        v29 != 0);
      v36 = PtiCurrent(v35);
      *((_QWORD *)v36 + 48) = v41;
      v42 = -1LL;
      v37 = PtiCurrent((__int64)v36);
      *((_QWORD *)v37 + 48) = v39;
    }
    goto LABEL_15;
  }
  v1 = 0;
  if ( v6 )
LABEL_15:
    GreDeleteFastMutex((char *)v6);
  if ( v10 )
    GreDeleteFastMutex(v10);
  return v1;
}
