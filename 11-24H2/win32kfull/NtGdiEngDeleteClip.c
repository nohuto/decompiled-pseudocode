/*
 * XREFs of NtGdiEngDeleteClip @ 0x140216000
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngDeleteClip(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  struct W32_PUSH_LOCK *v7[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+40h] [rbp-58h]

  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v7, CurrentThread);
  v4 = v8;
  v5 = 0;
  if ( v8 )
  {
    if ( a1 && a1 == *(_QWORD *)(v8 + 152) )
    {
      EngDeleteClip(*(CLIPOBJ **)(v8 + 144));
      *(_QWORD *)(v4 + 144) = 0LL;
      *(_QWORD *)(v4 + 152) = 0LL;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v7);
  return v5;
}
