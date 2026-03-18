/*
 * XREFs of NtGdiPATHOBJ_vEnumStart @ 0x1400D86D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D90F4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiPATHOBJ_vEnumStart(__int64 a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // r9
  _BYTE v8[32]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9; // [rsp+40h] [rbp-58h]

  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v8, CurrentThread);
  v4 = 0;
  if ( v9 )
  {
    v5 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v9, a1);
    if ( v5 && ((*(_DWORD *)(v6 + 444) & 0x100) == 0 || *(_QWORD *)(v5 + 8)) )
      PATHOBJ_vEnumStart((PATHOBJ *)v5);
  }
  else
  {
    v4 = -1073741811;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v8);
  return v4;
}
