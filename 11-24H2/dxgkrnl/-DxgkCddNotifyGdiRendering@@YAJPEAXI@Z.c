/*
 * XREFs of ?DxgkCddNotifyGdiRendering@@YAJPEAXI@Z @ 0x1403B5210
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkCddNotifyGdiRendering(struct DXGPROCESS *a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // eax
  __int64 v5; // r9
  int v6; // edx
  struct _EX_RUNDOWN_REF *v7; // rdx
  ULONG_PTR Count; // rcx
  unsigned int v9; // ebx
  __int64 v11; // rdx
  _BYTE v12[40]; // [rsp+50h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v13; // [rsp+80h] [rbp+8h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v12, a1);
  v4 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)a1 + 74) )
  {
    v5 = *((_QWORD *)a1 + 35);
    if ( (((unsigned int)v2 >> 25) & 0x60) == (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0x60)
      && (*(_DWORD *)(v5 + 16LL * v4 + 8) & 0x2000) == 0 )
    {
      v6 = *(_DWORD *)(v5 + 16LL * v4 + 8) & 0x1F;
      if ( v6 )
      {
        if ( v6 == 5 )
        {
          v7 = *(struct _EX_RUNDOWN_REF **)(v5 + 16LL * v4);
          goto LABEL_7;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v7 = 0LL;
LABEL_7:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v13, v7);
  if ( v13 )
  {
    Count = v13[6].Count;
    if ( Count )
      *(_DWORD *)(Count + 4) &= ~0x400u;
    v9 = 0;
  }
  else
  {
    v11 = v2;
    v9 = -1073741811;
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 3764;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v13);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12);
  return v9;
}
