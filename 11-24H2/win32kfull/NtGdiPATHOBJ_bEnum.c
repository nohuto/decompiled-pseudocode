/*
 * XREFs of NtGdiPATHOBJ_bEnum @ 0x1400D8DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1400D90F4 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1400D91A8 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnum(__int64 a1, __int64 a2)
{
  void *v2; // rsi
  unsigned int v4; // ebx
  POINTFIX *v5; // rdi
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v7; // r14
  __int64 v8; // rax
  POINTFIX *v9; // rax
  PATHDATA ppd; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v12[32]; // [rsp+30h] [rbp-88h] BYREF
  UMPDOBJ *v13; // [rsp+50h] [rbp-68h]

  v2 = (void *)a2;
  ppd = 0LL;
  v4 = 0;
  v5 = 0LL;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12, CurrentThread);
  v7 = v13;
  if ( !v13 )
    goto LABEL_15;
  v8 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>(v13, a1);
  if ( v8 )
  {
    if ( (*((_DWORD *)v7 + 111) & 0x100) == 0 || *(_QWORD *)(v8 + 8) )
      v4 = PATHOBJ_bEnum((PATHOBJ *)v8, &ppd);
    if ( ppd.count <= 0x4E2000 )
    {
      v9 = (POINTFIX *)UMPDOBJ::_AllocUserMem(v7, 8 * ppd.count, 0);
      v5 = v9;
      if ( v9 )
      {
        memmove(v9, ppd.pptfx, 8LL * ppd.count);
        ppd.pptfx = v5;
      }
      else
      {
        v4 = 0;
      }
      goto LABEL_9;
    }
LABEL_15:
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12);
    return 0LL;
  }
LABEL_9:
  if ( !v5 )
    ppd = 0LL;
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v2, &ppd, 0x10uLL);
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v12);
  return v4;
}
