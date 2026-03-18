/*
 * XREFs of CreatePhysicalAdapterSegments @ 0x14009B368
 * Callers:
 *     ?Initialize@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEBUDXGK_PHYSICALADAPTERINFO@@PEBU_DXGK_GPUMMUCAPS@@@Z @ 0x14009B888 (-Initialize@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEBUDXGK_PHYSICALADAPTERINFO@@PEBU_DXGK_GPUMMUCAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14004BED4 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     ValidateSegmentDescriptors @ 0x14009BBAC (ValidateSegmentDescriptors.c)
 *     InitializePhysicalAdapterSegments @ 0x14010DE00 (InitializePhysicalAdapterSegments.c)
 */

__int64 __fastcall CreatePhysicalAdapterSegments(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v4; // r12
  DXGADAPTER *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // r13
  unsigned int v12; // r14d
  PVOID Pool2; // rbx
  __int64 v14; // rcx
  DXGADAPTER *v15; // rcx
  int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // r15
  int v20; // eax
  bool v21; // zf
  unsigned __int16 v22; // ax
  int v23; // r14d
  __int64 v24; // rax
  unsigned __int64 v25; // kr00_8
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // eax
  _BYTE *v29; // rcx
  __int16 v30; // [rsp+30h] [rbp-D0h]
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v34; // [rsp+68h] [rbp-98h]
  __int128 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  struct _DXGKARG_QUERYADAPTERINFO v38; // [rsp+90h] [rbp-70h] BYREF
  PVOID P; // [rsp+C0h] [rbp-40h]
  _BYTE v40[416]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v41; // [rsp+268h] [rbp+168h]

  v4 = a4;
  v32 = a2;
  v38.pInputData = &v31;
  v37 = a3;
  v38.pOutputData = &v33;
  v6 = *(DXGADAPTER **)(a1 + 24);
  *(_QWORD *)&v38.Type = 11LL;
  *(_QWORD *)&v38.InputDataSize = 4LL;
  *(_QWORD *)&v38.Flags.0 = 0LL;
  HIDWORD(v38.hKmdProcessHandle) = 0;
  v33 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v31 = a4;
  v34 = 0LL;
  v38.OutputDataSize = 40;
  v7 = DXGADAPTER::DdiQueryAdapterInfo(v6, &v38);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(3LL, v7);
    WdLogGlobalForLineNumber = 640;
    return v8;
  }
  if ( !(_DWORD)v33 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 648;
LABEL_6:
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    return 3221225473LL;
  }
  if ( (unsigned int)v33 > 0x20 )
  {
    WdLogSingleEntry2(1LL, (unsigned int)v33, 32LL);
    WdLogGlobalForLineNumber = 656;
    goto LABEL_6;
  }
  v11 = (unsigned __int16)v33;
  P = 0LL;
  v12 = (unsigned __int16)v33;
  v41 = 0;
  if ( (unsigned __int16)v33 <= 4u )
  {
    P = v40;
    memset(v40, 0, 104LL * (unsigned __int16)v33);
    Pool2 = P;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned __int16)v33 < 0x68 )
    {
LABEL_15:
      _InterlockedAdd(&dword_1400816D8, 1u);
      WdLogSingleEntry1(6LL, v11);
      WdLogGlobalForLineNumber = 668;
LABEL_34:
      DxgkLogInternalTriageEvent(v14, 262145LL);
      if ( P != v40 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return 3221225495LL;
    }
    Pool2 = (PVOID)ExAllocatePool2(256LL, 104LL * (unsigned __int16)v33, 1265072196LL);
    P = Pool2;
  }
  v41 = v12;
  if ( !Pool2 )
    goto LABEL_15;
  v15 = *(DXGADAPTER **)(a1 + 24);
  v34 = Pool2;
  v36 = 104LL;
  v16 = DXGADAPTER::DdiQueryAdapterInfo(v15, &v38);
  v17 = v16;
  if ( v16 >= 0 )
  {
    if ( (unsigned __int8)ValidateSegmentDescriptors(a1, Pool2, v12, (unsigned int)v35) )
    {
      v19 = v32;
      v20 = 0xFFFF;
      v21 = (*(_BYTE *)(v32 + 476) & 0x12) == 0;
      if ( (*(_BYTE *)(v32 + 476) & 0x12) != 0 )
        LOWORD(v20) = v11;
      LODWORD(v32) = v20;
      v22 = v11 + 1;
      if ( v21 )
        v22 = v12;
      v23 = v22;
      v25 = v22;
      v24 = 8LL * v22;
      if ( !is_mul_ok(v25, 8uLL) )
        v24 = -1LL;
      v26 = operator new[](v24, 0x37306956u, 64LL);
      *(_QWORD *)(v19 + 1648) = v26;
      if ( !v26 )
      {
        _InterlockedAdd(&dword_140081714, 1u);
        WdLogSingleEntry2(6LL, a1, v4);
        WdLogGlobalForLineNumber = 712;
        goto LABEL_34;
      }
      v27 = v37;
      v30 = v32;
      *(_DWORD *)(v19 + 64) = v23;
      v28 = InitializePhysicalAdapterSegments(a1, v19, Pool2, v27, (_WORD)v4, (_WORD)v23, v30);
      v29 = P;
      v8 = v28;
      if ( v28 < 0 )
      {
        if ( P != v40 && P )
          ExFreePoolWithTag(P, 0);
        return v8;
      }
      *(_BYTE *)(v4 + a1 + 52) = v35;
      *(_DWORD *)(a1 + 4 * v4 + 372) = DWORD2(v35);
      *(_DWORD *)(a1 + 4 * v4 + 116) = DWORD1(v35);
      if ( v29 != v40 && v29 )
        ExFreePoolWithTag(v29, 0);
      return 0LL;
    }
    else
    {
      if ( P != v40 && P )
        ExFreePoolWithTag(P, 0);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, v16);
    WdLogGlobalForLineNumber = 680;
    DxgkLogInternalTriageEvent(v18, 0x40000LL);
    if ( P != v40 && P )
      ExFreePoolWithTag(P, 0);
    return v17;
  }
}
