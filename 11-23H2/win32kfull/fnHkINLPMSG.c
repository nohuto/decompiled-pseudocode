/*
 * XREFs of fnHkINLPMSG @ 0x1C0125540
 * Callers:
 *     xxxCallCtfHook @ 0x1C007EE54 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C0120F60 (xxxHkCallHook.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     ?CallfnHkINLPMSG@@YA_JHH_K_JP6A_JXZPEAU_PFNCLIENT@@K@Z @ 0x1C022AEF4 (-CallfnHkINLPMSG@@YA_JHH_K_JP6A_JXZPEAU_PFNCLIENT@@K@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0049CA8 (HMValidateHandle.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     _FreeTouchInputInfo @ 0x1C01AFD80 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C02042E0 (_FreeGestureInfo.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C024B4C8 (RtlMBMessageWParamCharToWCS.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C024B618 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall fnHkINLPMSG(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, int a6, _DWORD *a7)
{
  int v9; // esi
  __int64 v10; // r15
  __int64 v11; // r12
  unsigned int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  int v18; // ecx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  PERESOURCE *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  bool v38; // bl
  int v39; // r13d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  struct tagTHREADINFO *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // rax
  __int64 v53; // r13
  ULONG64 v54; // rax
  __int128 *v55; // xmm0_8
  __int64 v56; // rcx
  _QWORD *v57; // rdx
  int v58; // ecx
  __int64 v60; // [rsp+38h] [rbp-100h]
  _QWORD v61[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v62; // [rsp+60h] [rbp-D8h]
  __int128 v63; // [rsp+70h] [rbp-C8h]
  _OWORD v64[2]; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+A0h] [rbp-98h]
  __int64 v66; // [rsp+B0h] [rbp-88h]
  __int128 v67; // [rsp+C8h] [rbp-70h]
  volatile void *Address; // [rsp+D8h] [rbp-60h]
  __int128 v69; // [rsp+E0h] [rbp-58h]
  __int128 *v70; // [rsp+F0h] [rbp-48h]
  int v71; // [rsp+140h] [rbp+8h] BYREF
  unsigned __int64 v72; // [rsp+148h] [rbp+10h] BYREF
  __int64 v73; // [rsp+150h] [rbp+18h]

  v9 = 0;
  v72 = 0LL;
  v71 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v73 = 0LL;
  v60 = 0LL;
  v62 = 0LL;
  v65 = 0LL;
  v61[0] = (unsigned int)a1;
  v61[1] = a2;
  *((_DWORD *)a3 + 3) = 0;
  *((_DWORD *)a3 + 11) = 0;
  v63 = *a3;
  v64[0] = a3[1];
  v64[1] = a3[2];
  v12 = *((_DWORD *)a3 + 2);
  if ( ((v12 - 258) & 0xFFFFFFFB) != 0 || !a6 )
  {
    if ( v12 == 576 || ((v12 - 281) & 0xFFFFFFFD) == 0 )
    {
      v10 = *((_QWORD *)a3 + 2);
      v11 = *((_QWORD *)a3 + 3);
      v13 = HMValidateHandle(v11, 0xFFu);
      v17 = v13;
      if ( !v13 )
        return 0LL;
      v18 = *((_DWORD *)a3 + 2);
      v19 = v18 == 576;
      v20 = (unsigned int)(v18 - 576);
      if ( v19 && *(_BYTE *)(_HMPheFromObject(v13) + 24) != 20 )
        return 0LL;
      if ( ((*((_DWORD *)a3 + 2) - 281) & 0xFFFFFFFD) == 0 && *(_BYTE *)(_HMPheFromObject(v17) + 24) != 21 )
        return 0LL;
      v73 = *((_QWORD *)PtiCurrentShared(v20, v14, v15, v16) + 88);
      v60 = *((_QWORD *)PtiCurrentShared(v22, v21, v23, v24) + 89);
      *((_QWORD *)PtiCurrentShared(v26, v25, v27, v28) + 88) = v11;
      *((_QWORD *)PtiCurrentShared(v30, v29, v31, v32) + 89) = v10;
    }
  }
  else
  {
    v10 = *((_QWORD *)a3 + 2);
    RtlWCSMessageWParamCharToMB(v12, v64);
  }
  *(_QWORD *)&v62 = a4;
  *((_QWORD *)&v62 + 1) = a5;
  LODWORD(v65) = *a7;
  v33 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  v38 = ExIsResourceAcquiredExclusiveLite(*v33) != 1 && IS_USERCRIT_OWNED_AT_ALL(v35, v34, v36, v37);
  UserSessionSwitchLeaveCrit(v35, v34, v36, v37);
  EtwTraceBeginCallback(47LL);
  v39 = KeUserModeCallback(47LL, v61, 88LL, &v72, &v71);
  EtwTraceEndCallback(47LL);
  if ( v38 )
    EnterSharedCrit(v41, v40, v42);
  else
    EnterCrit(0LL, 0LL);
  if ( v12 == 576 || ((v12 - 281) & 0xFFFFFFFD) == 0 )
  {
    v47 = PtiCurrentShared(v44, v43, v45, v46);
    v48 = v73;
    *((_QWORD *)v47 + 88) = v73;
    *((_QWORD *)PtiCurrentShared(v48, v49, v50, v51) + 89) = v60;
  }
  if ( v39 < 0 || v71 != 24 )
    return 0LL;
  v52 = (__int64 *)v72;
  if ( v72 + 8 < v72 || v72 + 8 > MmUserProbeAddress )
    v52 = (__int64 *)MmUserProbeAddress;
  v53 = *v52;
  v66 = *v52;
  v54 = v72;
  if ( v72 + 24 < v72 || v72 + 24 > MmUserProbeAddress )
    v54 = MmUserProbeAddress;
  v67 = *(_OWORD *)v54;
  v55 = *(__int128 **)(v54 + 16);
  Address = v55;
  v69 = v67;
  v70 = v55;
  ProbeForRead(v55, 0x38uLL, 4u);
  *a3 = *v55;
  a3[1] = v55[1];
  a3[2] = v55[2];
  *a7 ^= (*((_DWORD *)v55 + 12) ^ *a7) & 0x10;
  v56 = *((unsigned int *)a3 + 2);
  if ( (((_DWORD)v56 - 258) & 0xFFFFFFFB) == 0 && a6 )
  {
    v57 = a3 + 1;
    if ( *(_QWORD *)&v64[0] == *((_QWORD *)a3 + 2) )
      *v57 = v10;
    else
      RtlMBMessageWParamCharToWCS(v56, v57);
  }
  v58 = *((_DWORD *)a3 + 2);
  if ( v58 == 576 || ((v58 - 281) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a3 + 2) = v12;
    *((_QWORD *)a3 + 2) = v10;
    *((_QWORD *)a3 + 3) = v11;
  }
  else if ( v10 == 1 )
  {
    if ( v12 == 576 )
      FreeTouchInputInfo(v11, 1LL);
    LOBYTE(v9) = ((v12 - 281) & 0xFFFFFFFD) == 0;
    if ( v9 )
    {
      FreeGestureInfo(v11, 1LL);
      return v53;
    }
  }
  return v53;
}
