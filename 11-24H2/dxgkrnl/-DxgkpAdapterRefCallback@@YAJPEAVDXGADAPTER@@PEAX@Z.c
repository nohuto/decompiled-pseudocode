/*
 * XREFs of ?DxgkpAdapterRefCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14018EE20
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 */

__int64 __fastcall DxgkpAdapterRefCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  _QWORD *v6; // rcx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v8, a1, 1);
  if ( *((_DWORD *)a1 + 50) != 1 )
    goto LABEL_5;
  v4 = *(unsigned int *)a2;
  if ( (unsigned int)v4 < *((_DWORD *)a2 + 1) )
  {
    v6 = (_QWORD *)(a2[1] + 16 * v4);
    *(_DWORD *)a2 = v4 + 1;
    *v6 = a1;
    _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
    v6[1] = -1LL;
LABEL_5:
    v5 = 0;
    goto LABEL_6;
  }
  v5 = -1073741789;
LABEL_6:
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
  return v5;
}
