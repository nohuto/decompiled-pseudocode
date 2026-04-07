/*
 * XREFs of ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x180008358
 * Callers:
 *     ?OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z @ 0x180008294 (-OnWindowCloakChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@_N2@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800D5EB4 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x1800D5FC4 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x1800D6088 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z @ 0x180008650 (-_FindRecord@CWindowPropertyTracker@@AEAAHPEAUHWND__@@@Z.c)
 *     ??_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z @ 0x1800150E4 (--_GCPropertyChangeRecord@CWindowPropertyTracker@@QEAAPEAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowPropertyTracker::_EnsureRecordExists(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        HWND *a3,
        int *a4)
{
  unsigned int v6; // r14d
  int Record; // eax
  int v8; // r15d
  __int64 v9; // rax
  HWND *v10; // r14
  CWindowPropertyTracker::CPropertyChangeRecord *v11; // r10
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // edi
  unsigned int v15; // r13d
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  CWindowPropertyTracker::CPropertyChangeRecord *v19; // rax
  unsigned int v20; // r8d
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // edx
  __int64 v25; // r8
  __int64 v26; // r10
  unsigned int v27; // eax
  unsigned int v28; // r8d
  int v29; // eax
  CWindowPropertyTracker::CPropertyChangeRecord *v30; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v31[3]; // [rsp+38h] [rbp-18h] BYREF
  const struct CStoryboard *v32; // [rsp+98h] [rbp+48h] BYREF
  HWND *v33; // [rsp+A0h] [rbp+50h]
  int *v34; // [rsp+A8h] [rbp+58h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v31[0] = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v30 = 0LL;
  Record = CWindowPropertyTracker::_FindRecord(this, a3[5]);
  v8 = Record;
  if ( Record >= 0 )
  {
    v24 = 0;
    v25 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    while ( v24 < *(_DWORD *)(v25 + 32) )
    {
      if ( *(const struct CStoryboard **)(*(_QWORD *)(v25 + 8) + 8LL * v24) == v32 )
        goto LABEL_14;
      ++v24;
    }
    _mm_lfence();
    v26 = *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)Record);
    v27 = *(_DWORD *)(v26 + 32);
    v28 = v27 + 1;
    if ( v27 + 1 >= v27 )
    {
      if ( v28 > *(_DWORD *)(v26 + 28) )
      {
        v29 = DynArrayImpl<0>::AddMultipleAndSet(v26 + 8, 8LL, 1LL, &v32);
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0xC0u, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v26 + 8) + 8LL * *(unsigned int *)(v26 + 32)) = v32;
        *(_DWORD *)(v26 + 32) = v28;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    goto LABEL_14;
  }
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         160LL);
  v31[1] = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_DWORD *)(v9 + 32) = 0;
    v30 = (CWindowPropertyTracker::CPropertyChangeRecord *)v9;
    v10 = v33;
    *(_QWORD *)v9 = v33[5];
    v11 = v30;
    v12 = *((_DWORD *)v30 + 8);
    v13 = v12 + 1;
    v14 = -2147024362;
    v15 = 181;
    if ( v12 + 1 < v12 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else if ( v13 <= *((_DWORD *)v30 + 7) )
    {
      *(_QWORD *)(*((_QWORD *)v30 + 1) + 8LL * *((unsigned int *)v30 + 8)) = v32;
      *((_DWORD *)v11 + 8) = v13;
    }
    else
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((char *)v30 + 8, 8LL, 1LL, &v32);
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u, 0LL);
    }
    *((_BYTE *)v30 + 44) = *((_BYTE *)v10 + 676) & 1;
    *((_DWORD *)v30 + 12) = *((_DWORD *)v10 + 54);
    *((_DWORD *)v30 + 13) = *((_DWORD *)v10 + 55);
    v17 = 0;
    if ( *((_DWORD *)v10 + 56) - *((_DWORD *)v10 + 54) >= 0 )
      v17 = *((_DWORD *)v10 + 56) - *((_DWORD *)v10 + 54);
    *((_DWORD *)v30 + 14) = v17;
    v18 = 0;
    if ( *((_DWORD *)v10 + 57) - *((_DWORD *)v10 + 55) >= 0 )
      v18 = *((_DWORD *)v10 + 57) - *((_DWORD *)v10 + 55);
    *((_DWORD *)v30 + 15) = v18;
    *((_OWORD *)v30 + 4) = *(_OWORD *)(v10 + 29);
    *((_OWORD *)v30 + 5) = *(_OWORD *)(v10 + 31);
    *((_DWORD *)v30 + 24) = *((_DWORD *)v10 + 29);
    v19 = v30;
    *(_OWORD *)((char *)v30 + 100) = *(_OWORD *)((char *)v30 + 44);
    *(_OWORD *)((char *)v19 + 116) = *(_OWORD *)((char *)v19 + 60);
    *(_OWORD *)((char *)v19 + 132) = *(_OWORD *)((char *)v19 + 76);
    *(_QWORD *)((char *)v19 + 148) = *(_QWORD *)((char *)v19 + 92);
    LODWORD(v19) = *((_DWORD *)this + 6);
    v20 = (_DWORD)v19 + 1;
    if ( (int)v19 + 1 < (unsigned int)v19 )
    {
      v6 = -2147024362;
    }
    else
    {
      v14 = 0;
      if ( v20 <= *((_DWORD *)this + 5) )
      {
        *(_QWORD *)(*(_QWORD *)this + 8LL * *((unsigned int *)this + 6)) = v30;
        *((_DWORD *)this + 6) = v20;
        goto LABEL_13;
      }
      v14 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v30);
      v6 = v14;
      if ( v14 >= 0 )
      {
LABEL_13:
        v6 = v14;
        v8 = *((_DWORD *)this + 6) - 1;
LABEL_14:
        *v34 = v8;
        goto LABEL_15;
      }
      v15 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v15, 0LL);
    v22 = 142;
  }
  else
  {
    v6 = -2147024882;
    v14 = -2147024882;
    v22 = 125;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v22, 0LL);
  if ( v30 )
    CWindowPropertyTracker::CPropertyChangeRecord::`scalar deleting destructor'(v30, v23);
LABEL_15:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(v31);
  return v6;
}
