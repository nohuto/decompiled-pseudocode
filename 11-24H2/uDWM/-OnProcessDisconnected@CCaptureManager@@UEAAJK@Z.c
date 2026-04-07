/*
 * XREFs of ?OnProcessDisconnected@CCaptureManager@@UEAAJK@Z @ 0x1800AEE60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1980 (-StopDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1AE0 (-StopFilteredDisplayCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B1BF0 (-StopWindowCapture@CCaptureManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?push_back@?$vector@UDWM_CAPTURE_TOKEN@@V?$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAAX$$QEAUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B5740 (-push_back@-$vector@UDWM_CAPTURE_TOKEN@@V-$allocator@UDWM_CAPTURE_TOKEN@@@std@@@std@@QEAAX$$QEAU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CCaptureManager::OnProcessDisconnected(CCaptureManager *this, int a2)
{
  __int64 **v4; // rdi
  __int64 *i; // rbx
  struct DWM_CAPTURE_TOKEN *v6; // rdi
  const struct DWM_CAPTURE_TOKEN *v7; // rsi
  struct DWM_CAPTURE_TOKEN *v8; // r14
  bool v9; // zf
  int v10; // eax
  unsigned int v11; // ebx
  __int64 **v12; // rdi
  __int64 *j; // rbx
  struct DWM_CAPTURE_TOKEN *v14; // rbx
  const struct DWM_CAPTURE_TOKEN *v15; // rdi
  struct DWM_CAPTURE_TOKEN *v16; // rsi
  bool v17; // zf
  int v18; // eax
  int v19; // r14d
  __int64 **v20; // rdi
  __int64 *k; // rbx
  struct DWM_CAPTURE_TOKEN *v22; // rbx
  const struct DWM_CAPTURE_TOKEN *v23; // rdi
  int v24; // eax
  int v25; // esi
  struct DWM_CAPTURE_TOKEN *v27[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v30; // [rsp+70h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+80h] [rbp+40h] BYREF

  v31 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  v4 = (__int64 **)*((_QWORD *)this + 2);
  for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 7) == a2 )
    {
      v30 = i[3];
      std::vector<DWM_CAPTURE_TOKEN>::push_back(v27, &v30);
    }
  }
  v6 = v27[0];
  v7 = v27[0];
  v8 = v27[1];
  v9 = v27[0] == v27[1];
  if ( v27[0] == v27[1] )
  {
LABEL_10:
    if ( !v9 )
      v8 = v6;
    v27[1] = v8;
    v12 = (__int64 **)*((_QWORD *)this + 10);
    for ( j = *v12; j != (__int64 *)v12; j = (__int64 *)*j )
    {
      if ( *((_DWORD *)j + 7) == a2 )
      {
        v30 = j[3];
        std::vector<DWM_CAPTURE_TOKEN>::push_back(v27, &v30);
      }
    }
    v14 = v27[0];
    v15 = v27[0];
    v16 = v27[1];
    v17 = v27[0] == v27[1];
    if ( v27[0] == v27[1] )
    {
LABEL_23:
      if ( !v17 )
        v16 = v14;
      v27[1] = v16;
      v20 = (__int64 **)*((_QWORD *)this + 18);
      for ( k = *v20; k != (__int64 *)v20; k = (__int64 *)*k )
      {
        if ( *((_DWORD *)k + 7) == a2 )
        {
          v30 = k[3];
          std::vector<DWM_CAPTURE_TOKEN>::push_back(v27, &v30);
        }
      }
      v22 = v27[0];
      v23 = v27[0];
      if ( v27[0] == v27[1] )
      {
LABEL_36:
        if ( v22 )
          std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)((v28 - (_QWORD)v22) & 0xFFFFFFFFFFFFFFF8uLL));
        v11 = 0;
      }
      else
      {
        while ( 1 )
        {
          v24 = CCaptureManager::StopFilteredDisplayCapture(this, v23);
          v25 = v24;
          if ( v24 < 0 )
            break;
          v23 = (const struct DWM_CAPTURE_TOKEN *)((char *)v23 + 8);
          if ( v23 == v27[1] )
            goto LABEL_36;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x309,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)v24);
        if ( v22 )
          std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)((v28 - (_QWORD)v22) & 0xFFFFFFFFFFFFFFF8uLL));
        v11 = v25;
      }
    }
    else
    {
      while ( 1 )
      {
        v18 = CCaptureManager::StopDisplayCapture(this, v15);
        v19 = v18;
        if ( v18 < 0 )
          break;
        v15 = (const struct DWM_CAPTURE_TOKEN *)((char *)v15 + 8);
        if ( v15 == v16 )
        {
          v17 = v14 == v16;
          goto LABEL_23;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FB,
        (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
        (const char *)(unsigned int)v18);
      if ( v14 )
        std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)((v28 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF8uLL));
      v11 = v19;
    }
  }
  else
  {
    while ( 1 )
    {
      v10 = CCaptureManager::StopWindowCapture(this, v7);
      v11 = v10;
      if ( v10 < 0 )
        break;
      v7 = (const struct DWM_CAPTURE_TOKEN *)((char *)v7 + 8);
      if ( v7 == v8 )
      {
        v9 = v6 == v8;
        goto LABEL_10;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2ED,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v10);
    if ( v6 )
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)((v28 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v31);
  return v11;
}
