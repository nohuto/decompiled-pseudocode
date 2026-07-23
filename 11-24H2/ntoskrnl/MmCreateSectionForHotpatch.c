/*
 * XREFs of MmCreateSectionForHotpatch @ 0x1407F6770
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     MiCreatePatchSectionRequest @ 0x140AE969C (MiCreatePatchSectionRequest.c)
 * Callees:
 *     MiCreateSectionCommon @ 0x140954024 (MiCreateSectionCommon.c)
 */

__int64 __fastcall MmCreateSectionForHotpatch(__int64 a1, int a2, int a3, int a4, char a5, int a6)
{
  ULONGLONG v7; // [rsp+40h] [rbp-58h]
  _QWORD v8[3]; // [rsp+60h] [rbp-38h] BYREF
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]
  __int128 v11; // [rsp+80h] [rbp-18h]

  v8[0] = 48LL;
  LODWORD(v7) = 0;
  v10 = 0;
  v8[1] = 0LL;
  v9 = a5 != 0 ? 0 : 0x200;
  v8[2] = 0LL;
  v11 = 0LL;
  return MiCreateSectionCommon(a6, a2, (int)v8, 0, a3, a4, a1, 0LL, v7, 6, 0);
}
