/*
 * XREFs of ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801A0974
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180079C30 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801A0C0C (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801A0CA8 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?EnsureConsistentSegmentSize@CGenericInk@@AEAAJI@Z @ 0x1801A0CE8 (-EnsureConsistentSegmentSize@CGenericInk@@AEAAJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?IncludeLastBatchMemoryInDump@CComposition@@SAXXZ @ 0x18024BF98 (-IncludeLastBatchMemoryInDump@CComposition@@SAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInk::ProcessSegmentUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_SEGMENTUPDATE *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v5; // r15d
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  int v12; // r12d
  int v13; // eax
  __int64 v14; // r8
  unsigned int v15; // ecx
  __int64 v16; // r14
  unsigned int v17; // eax
  int v18; // esi
  int v19; // r13d
  unsigned int v20; // r12d
  unsigned int v21; // r13d
  __int128 *v22; // rdx
  __int64 v23; // rcx
  __int64 i; // rax
  int v26; // [rsp+40h] [rbp-61h]
  struct D2D_RECT_F v27; // [rsp+48h] [rbp-59h] BYREF
  __int128 v28; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v29[5]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v30[16]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = 0;
  v29[0] = &CRectanglesShape::`vftable';
  v29[2] = v30;
  v29[1] = 0LL;
  v29[3] = v30;
  v29[4] = &v31;
  v31 = 0LL;
  if ( *((_DWORD *)a3 + 3)
    && (v9 = CGenericInk::EnsureConsistentSegmentSize(this, a5 / *((_DWORD *)a3 + 3)), v10 = v9, v9 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x33u, 0LL);
  }
  else
  {
    v11 = *((_DWORD *)this + 68);
    if ( v11 )
      v12 = *((_DWORD *)this + 66) / v11;
    else
      v12 = 0;
    *((_DWORD *)this + 66) = *((_DWORD *)a3 + 2) * v11;
    v13 = DynArray<unsigned char,0>::AddMultipleAndSet((char *)this + 240, a4, a5);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x3Bu, 0LL);
    }
    else
    {
      v15 = *((_DWORD *)a3 + 4);
      *((_DWORD *)this + 69) = v15;
      *((_DWORD *)this + 70) = *((_DWORD *)a3 + 5);
      v16 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
      if ( (_DWORD)v16 )
      {
        v17 = *((_DWORD *)a3 + 3);
        v18 = *((_DWORD *)a3 + 2);
        v19 = v18 + v17;
        if ( v15 > v17 )
          v18 += v17 - v15;
        v20 = v12 - v18;
        v21 = v19 - v18;
        v28 = 0LL;
        while ( v5 < (unsigned int)v16 )
        {
          v22 = &v28;
          if ( v5 )
            v22 = 0LL;
          v23 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL * v5) + 72LL);
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, __int128 *))(*(_QWORD *)v23 + 48LL))(
                  v23,
                  v20,
                  *((_QWORD *)this + 30) + (unsigned int)(v18 * *((_DWORD *)this + 68)),
                  v21,
                  *((_DWORD *)this + 69),
                  *((_DWORD *)this + 68),
                  v22);
          if ( v26 < 0 )
          {
            CComposition::IncludeLastBatchMemoryInDump();
            ModuleFailFastForHRESULT(v26, retaddr);
          }
          ++v5;
        }
        for ( i = 0LL; i < 16; i += 4LL )
          *(float *)((char *)&v27.left + i) = (float)*(int *)((char *)&v29[-1] + i);
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v29, &v27, v14);
        *((_QWORD *)this + 36) = v29;
      }
      (*(void (__fastcall **)(CGenericInk *, __int64))(*(_QWORD *)this + 80LL))(this, 3LL);
      if ( *((_QWORD *)this + 36) )
        (*(void (__fastcall **)(CGenericInk *, __int64, CGenericInk *))(*(_QWORD *)this + 80LL))(this, 1LL, this);
      CSuperWetInkManager::OnUpdatedInkReceived(*(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL), this);
    }
  }
  *((_QWORD *)this + 36) = 0LL;
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v29);
  return v10;
}
