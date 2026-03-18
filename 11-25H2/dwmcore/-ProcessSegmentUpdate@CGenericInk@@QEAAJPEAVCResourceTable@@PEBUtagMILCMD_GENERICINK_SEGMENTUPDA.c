/*
 * XREFs of ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801AA8F8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800ABA50 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801AAB90 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801AAC2C (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?EnsureConsistentSegmentSize@CGenericInk@@AEAAJI@Z @ 0x1801AAC6C (-EnsureConsistentSegmentSize@CGenericInk@@AEAAJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?IncludeLastBatchMemoryInDump@CComposition@@SAXXZ @ 0x180257368 (-IncludeLastBatchMemoryInDump@CComposition@@SAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v14; // ecx
  __int64 v15; // r14
  unsigned int v16; // eax
  int v17; // esi
  int v18; // r13d
  unsigned int v19; // r12d
  unsigned int v20; // r13d
  __int128 *v21; // rdx
  __int64 v22; // rcx
  __int64 i; // rax
  int v25; // [rsp+40h] [rbp-61h]
  struct D2D_RECT_F v26; // [rsp+48h] [rbp-59h] BYREF
  __int128 v27; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v28[5]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v29[16]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+7h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = 0;
  v28[0] = &CRectanglesShape::`vftable';
  v28[2] = v29;
  v28[1] = 0LL;
  v28[3] = v29;
  v28[4] = &v30;
  v30 = 0LL;
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
      v14 = *((_DWORD *)a3 + 4);
      *((_DWORD *)this + 69) = v14;
      *((_DWORD *)this + 70) = *((_DWORD *)a3 + 5);
      v15 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
      if ( (_DWORD)v15 )
      {
        v16 = *((_DWORD *)a3 + 3);
        v17 = *((_DWORD *)a3 + 2);
        v18 = v17 + v16;
        if ( v14 > v16 )
          v17 += v16 - v14;
        v19 = v12 - v17;
        v20 = v18 - v17;
        v27 = 0LL;
        while ( v5 < (unsigned int)v15 )
        {
          v21 = &v27;
          if ( v5 )
            v21 = 0LL;
          v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 8LL * v5) + 72LL);
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, __int128 *))(*(_QWORD *)v22 + 48LL))(
                  v22,
                  v19,
                  *((_QWORD *)this + 30) + (unsigned int)(v17 * *((_DWORD *)this + 68)),
                  v20,
                  *((_DWORD *)this + 69),
                  *((_DWORD *)this + 68),
                  v21);
          if ( v25 < 0 )
          {
            CComposition::IncludeLastBatchMemoryInDump();
            ModuleFailFastForHRESULT(v25, retaddr);
          }
          ++v5;
        }
        for ( i = 0LL; i < 16; i += 4LL )
          *(float *)((char *)&v26.left + i) = (float)*(int *)((char *)&v28[-1] + i);
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v28, &v26);
        *((_QWORD *)this + 36) = v28;
      }
      (*(void (__fastcall **)(CGenericInk *, __int64))(*(_QWORD *)this + 80LL))(this, 3LL);
      if ( *((_QWORD *)this + 36) )
        (*(void (__fastcall **)(CGenericInk *, __int64, CGenericInk *))(*(_QWORD *)this + 80LL))(this, 1LL, this);
      CSuperWetInkManager::OnUpdatedInkReceived(*(CSuperWetInkManager **)(*((_QWORD *)this + 3) + 656LL), this);
    }
  }
  *((_QWORD *)this + 36) = 0LL;
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v28);
  return v10;
}
