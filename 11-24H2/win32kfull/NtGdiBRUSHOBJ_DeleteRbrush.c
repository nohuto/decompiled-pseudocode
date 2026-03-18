/*
 * XREFs of NtGdiBRUSHOBJ_DeleteRbrush @ 0x1401E7A70
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1400DA1A8 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_DeleteRbrush(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // r9
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rcx
  struct W32_PUSH_LOCK *v15[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+40h] [rbp-58h]

  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v15, CurrentThread);
  v5 = v16;
  v6 = 0;
  if ( v16 )
  {
    if ( a1 )
    {
      v7 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v16, a1);
      v8 = v7;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        if ( v9 )
        {
          if ( v9 < (unsigned __int64)MmSystemRangeStart )
          {
            EngFreeUserMem((PVOID)(v9 - 16));
            *(_QWORD *)(v8 + 8) = 0LL;
          }
        }
      }
    }
    if ( a2 )
    {
      v11 = UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(v5, a2);
      v13 = v11;
      if ( v11 )
      {
        v14 = *(_QWORD *)(v11 + 8);
        if ( v14 )
        {
          if ( v14 < *v12 )
          {
            EngFreeUserMem((PVOID)(v14 - 16));
            *(_QWORD *)(v13 + 8) = 0LL;
          }
        }
      }
    }
    v6 = 1;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v15);
  return v6;
}
