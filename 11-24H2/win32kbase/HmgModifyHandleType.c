/*
 * XREFs of HmgModifyHandleType @ 0x140016130
 * Callers:
 *     HmgLockAndModifyHandleType @ 0x140016090 (HmgLockAndModifyHandleType.c)
 *     ?bSetStockObject@@YAHPEAXHH@Z @ 0x14013C700 (-bSetStockObject@@YAHPEAXHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x140175318 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     bInitBRUSHOBJ @ 0x1402E409C (bInitBRUSHOBJ.c)
 * Callees:
 *     ?GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x140015F3C (-GetEntryFromIndex@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x140016A30 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     EtwTraceGdiTransformHandle @ 0x140016B40 (EtwTraceGdiTransformHandle.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgModifyHandleType(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  GdiHandleManager *v4; // rbx
  struct _ENTRY *EntryFromIndex; // rdi
  struct OBJECT *EntryObject; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int EtwGdiHandleType; // eax
  __int64 result; // rax

  v3 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v4 = *(GdiHandleManager **)(*(_QWORD *)(W32GetSessionState(a1, a2) + 88) + 5672LL);
  EntryFromIndex = GdiHandleManager::GetEntryFromIndex(v4, v3);
  EntryObject = GdiHandleManager::GetEntryObject(v4, v3);
  LOBYTE(v7) = *((_BYTE *)EntryFromIndex + 14);
  EtwGdiHandleType = GetEtwGdiHandleType(v7, v8, v9, *((_DWORD *)EntryFromIndex + 2) & 0xFFFFFFFE);
  EtwTraceGdiTransformHandle(*(_QWORD *)EntryObject, a1, EtwGdiHandleType);
  result = a1;
  *((_WORD *)EntryFromIndex + 6) = WORD1(a1);
  *(_QWORD *)EntryObject = a1;
  return result;
}
