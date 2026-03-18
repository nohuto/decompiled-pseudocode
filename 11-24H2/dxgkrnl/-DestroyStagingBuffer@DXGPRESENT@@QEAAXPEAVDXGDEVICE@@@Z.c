/*
 * XREFs of ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402CD408
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1402CD6D8 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1401B1230 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402CCEDC (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGPRESENT::DestroyStagingBuffer(DXGPRESENT *this, struct DXGDEVICE *a2)
{
  struct DXGPROCESS *Current; // rbp
  unsigned int v5; // eax
  __int64 v6; // r8
  int v7; // ecx
  struct DXGALLOCATION **v8; // rbx
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // edx
  __int64 v13; // [rsp+28h] [rbp-50h]
  _BYTE v14[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10104;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NULL != pDevice", 10104LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 105) )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this);
    if ( !Current )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 10114;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pProcess != NULL", 10114LL, 0LL, 0LL, 0LL, 0LL);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v14, Current);
    v5 = (*((_DWORD *)this + 105) >> 6) & 0xFFFFFF;
    if ( v5 < *((_DWORD *)Current + 74) )
    {
      v6 = *((_QWORD *)Current + 35);
      if ( ((*((_DWORD *)this + 105) >> 25) & 0x60) == (*(_BYTE *)(v6 + 16LL * v5 + 8) & 0x60)
        && (*(_DWORD *)(v6 + 16LL * v5 + 8) & 0x2000) == 0 )
      {
        v7 = *(_DWORD *)(v6 + 16LL * v5 + 8) & 0x1F;
        if ( v7 )
        {
          if ( v7 == 4 )
          {
            v8 = *(struct DXGALLOCATION ***)(v6 + 16LL * v5);
            if ( v8 )
            {
              v9 = *((_DWORD *)this + 105);
              v10 = (v9 >> 6) & 0xFFFFFF;
              if ( (unsigned int)v10 < *((_DWORD *)Current + 74) )
              {
                v11 = *((_QWORD *)Current + 35);
                v12 = *(_DWORD *)(v11 + 16 * v10 + 8);
                if ( ((v9 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60)
                  && (v12 & 0x2000) == 0
                  && (v12 & 0x1F) != 0 )
                {
                  *(_DWORD *)(v11 + 16 * (((unsigned __int64)v9 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
                }
              }
            }
            goto LABEL_13;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v8 = 0LL;
LABEL_13:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
    if ( v8 )
    {
      if ( *((_DWORD *)a2 + 152) == 4 )
        DXGDEVICE::DestroyClientResource(a2, v8);
      else
        DXGDEVICE::DestroyAllocationInternal(
          a2,
          0,
          0LL,
          (struct DXGRESOURCE *)v8,
          0LL,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
    }
    else
    {
      WdLogSingleEntry2(2LL, a2, *((unsigned int *)this + 105));
      v13 = *((unsigned int *)this + 105);
      WdLogGlobalForLineNumber = 10130;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Device 0x%I64x: Invalid staging buffer resource handle (0x%I64x) specified",
        (__int64)a2,
        v13,
        0LL,
        0LL,
        0LL);
    }
    *((_QWORD *)this + 52) = 0LL;
  }
}
