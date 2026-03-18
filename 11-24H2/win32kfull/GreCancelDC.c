/*
 * XREFs of GreCancelDC @ 0x140330A3C
 * Callers:
 *     NtGdiCancelDC @ 0x140336DB0 (NtGdiCancelDC.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400CDC98 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400DD150 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??0XDCOBJ@@QEAA@XZ @ 0x1401542B0 (--0XDCOBJ@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x14030D664 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreCancelDC(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  HSEMAPHORE v6; // rbx
  struct _GRETHREAD *v7; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v11[3]; // [rsp+48h] [rbp-30h] BYREF
  HSEMAPHORE v12; // [rsp+88h] [rbp+10h] BYREF

  SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v12);
  XDCOBJ::XDCOBJ((XDCOBJ *)v10);
  UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v11);
  v10[0] = 0LL;
  v2 = 1;
  LOBYTE(v3) = 1;
  v4 = HmgShareLockCheck(a1, v3);
  v10[0] = v4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 496);
    if ( v5 )
      *(_DWORD *)(v5 + 112) |= 0x40000000u;
  }
  else
  {
    v2 = 0;
  }
  DCOBJA::~DCOBJA((DCOBJA *)v10);
  v6 = v12;
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v12);
    v7 = GreGetCurrentThreadCrossSessionCheck();
    if ( v7 )
    {
      if ( (*((_BYTE *)v7 + 28))-- == 1 )
        *(_QWORD *)v7 &= ~0x100000uLL;
      if ( !*(_QWORD *)v7 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v6);
  }
  return v2;
}
