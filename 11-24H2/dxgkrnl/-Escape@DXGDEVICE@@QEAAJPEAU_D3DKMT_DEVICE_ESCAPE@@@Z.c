/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x140188638
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Escape(ADAPTER_RENDER **this, struct _D3DKMT_DEVICE_ESCAPE *a2)
{
  unsigned int v3; // ebx
  __int64 Type; // rdx
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rax
  D3DKMT_HANDLE v8; // ecx
  __int64 v9; // r10
  __int64 v10; // r9
  int v11; // ecx
  int v12; // ecx
  struct DXGALLOCATION *v13; // rdx
  unsigned int v14; // eax
  _BYTE v15[40]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5445;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      5445LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Type = a2->Type;
  if ( !(_DWORD)Type )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v15, Current);
    v7 = DXGPROCESS::GetCurrent();
    v8 = (a2->VidPnFromAllocation.hPrimaryAllocation >> 6) & 0xFFFFFF;
    if ( v8 < *((_DWORD *)v7 + 74) )
    {
      v9 = *((_QWORD *)v7 + 35);
      v10 = 2LL * v8;
      v11 = *(_DWORD *)(v9 + 16LL * v8 + 8);
      if ( ((a2->VidPnFromAllocation.hPrimaryAllocation >> 25) & 0x60) == (v11 & 0x60) && (v11 & 0x2000) == 0 )
      {
        v12 = v11 & 0x1F;
        if ( v12 )
        {
          if ( v12 == 5 )
          {
            v13 = *(struct DXGALLOCATION **)(v9 + 8 * v10);
            goto LABEL_14;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v13 = 0LL;
LABEL_14:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v16, v13);
    if ( v16 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(v16 + 48) + 4LL);
      if ( (v14 & 0x2003) != 0 )
      {
        a2->VidPnFromAllocation.VidPnSourceId = (v14 >> 6) & 0xF;
      }
      else
      {
        v3 = -1073741811;
        WdLogSingleEntry2(3LL, a2->VidPnFromAllocation.hPrimaryAllocation, -1073741811LL);
        WdLogGlobalForLineNumber = 5472;
      }
    }
    else
    {
      v3 = -1073741811;
      WdLogSingleEntry2(3LL, a2->VidPnFromAllocation.hPrimaryAllocation, -1073741811LL);
      WdLogGlobalForLineNumber = 5462;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v16);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    return v3;
  }
  if ( (_DWORD)Type == 1 )
    return 3221225659LL;
  v3 = -1073741811;
  WdLogSingleEntry2(3LL, Type, -1073741811LL);
  WdLogGlobalForLineNumber = 5492;
  return v3;
}
