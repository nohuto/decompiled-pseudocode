/*
 * XREFs of ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x14001A350
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140019A04 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140019CF8 (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x14001B7A0 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400296C0 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017A1BC (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CRegion::Combine(_QWORD *a1, __int64 a2, int a3)
{
  _DWORD *v3; // rsi
  int v5; // ecx
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  int v8; // r14d
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // r9d
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 *SystemArgument1; // r14
  char v16; // r13
  char *v17; // rsi
  __int64 v18; // r14
  __int64 v19; // r9
  int v20; // edi
  char v21; // al
  __int64 v22; // rax
  int v24[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+58h] BYREF

  v3 = (_DWORD *)a1 + 3;
  v5 = *((_DWORD *)a1 + 3);
  v6 = (_DWORD *)(a2 + 12);
  v7 = 0;
  v8 = a3;
  if ( v5 == 2 )
  {
    if ( *v6 == 2 )
      goto LABEL_6;
    v3 = (_DWORD *)a1 + 3;
  }
  if ( !*v6 )
  {
    if ( a3 != 5 )
      goto LABEL_6;
    goto LABEL_26;
  }
  if ( *v6 == 1 )
  {
    switch ( a3 )
    {
      case 1:
        goto LABEL_6;
      case 2:
LABEL_35:
        (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
        goto LABEL_6;
      case 3:
        return (unsigned int)-2147020579;
    }
    if ( a3 != 4 )
    {
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
      goto LABEL_35;
    }
LABEL_26:
    (*(void (__fastcall **)(_QWORD *))(*a1 + 16LL))(a1);
    goto LABEL_6;
  }
  if ( !v5 )
    goto LABEL_5;
  if ( v5 != 1 )
    return (unsigned int)-1073741595;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
      goto LABEL_6;
    if ( a3 != 3 && a3 != 4 )
    {
      if ( a3 != 5 )
        return (unsigned int)-1073741811;
      goto LABEL_43;
    }
    return (unsigned int)-2147020579;
  }
LABEL_43:
  v8 = 5;
LABEL_5:
  v7 = CRegion::InitializeFromRect((CRegion *)a1, &CRegion::sc_rcEmpty);
  if ( (v7 & 0x80000000) != 0 )
    return v7;
LABEL_6:
  if ( *v3 != 2 || *v6 != 2 )
    return v7;
  v10 = a1[2];
  v11 = *(_QWORD *)(a2 + 16);
  v26 = v11;
  *(_QWORD *)v24 = v10;
  if ( !v10 || !v11 || (unsigned int)(v8 - 1) > 4 )
    return (unsigned int)-1073741811;
  if ( v8 == 5 )
  {
    if ( RGNCOREOBJ::bCopy((RGNCOREOBJ *)v24, (const struct RGNCOREOBJ *)&v26) )
    {
      a1[2] = v10;
      return 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v25);
    v13 = v25;
    if ( v25 )
    {
      v14 = v8;
      SystemArgument1 = (__int64 *)WPP_MAIN_CB.Dpc.SystemArgument1;
      v16 = byte_140259E24[v14];
      if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        v17 = (char *)WPP_MAIN_CB.Dpc.SystemArgument1 + 8;
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(SystemArgument1 + 1, 2LL);
        v18 = *SystemArgument1;
        LOBYTE(v19) = v16;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v18 + 184))(v13, v10, v11, v19);
        if ( !(*(unsigned int (__fastcall **)(__int64))(v18 + 216))(v13) )
          DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v13, 0LL, 0LL, 0LL, 0LL, 0);
        ExReleasePushLockSharedEx(v17, 2LL);
        KeLeaveCriticalRegion();
        v21 = v20 != 0;
      }
      else
      {
        LOBYTE(v12) = byte_140259E24[v14];
        v21 = RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___(
                (int)&v25,
                (int)v24,
                (int)&v26,
                v12,
                (RGNCOREOBJ *)&v25);
      }
      if ( v21 )
      {
        v22 = v25;
        v25 = v10;
        v7 = 0;
        a1[2] = v22;
      }
      else
      {
        v7 = -1073741823;
      }
    }
    else
    {
      v7 = -1073741801;
    }
    RGNCOREOBJ::vDeleteRGNCOREOBJ((RGNCOREOBJ *)&v25);
  }
  return v7;
}
