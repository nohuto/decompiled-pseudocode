/*
 * XREFs of ?OnCursorCreated@SystemCursorService2@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1800FA480
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAndRemoveInitialCursorPositionForInputType@SystemCursorController2@@QEAA_NW4InputType@@PEAH1@Z @ 0x1800F73F8 (-GetAndRemoveInitialCursorPositionForInputType@SystemCursorController2@@QEAA_NW4InputType@@PEAH1.c)
 *     ??A?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAAAEA_K$$QEA_K@Z @ 0x1800F9258 (--A-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     ?EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ @ 0x1800FA0BC (-EnumerateCursorsForShell@SystemCursorService2@@AEAAJXZ.c)
 *     ?InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA?AW4CursorDeviceTypeId@@W4InputType@@@Z @ 0x1800FA430 (-InputTypeToCursorDeviceTypeId@SystemCursorService2@@CA-AW4CursorDeviceTypeId@@W4InputType@@@Z.c)
 *     ?SetRasterizationScale@SystemCursor2@@QEAAJI@Z @ 0x1800FB2F8 (-SetRasterizationScale@SystemCursor2@@QEAAJI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SystemCursorService2::OnCursorCreated(__int64 *a1, __int64 a2, int *a3)
{
  unsigned int v5; // edi
  int v6; // eax
  __int64 ***v7; // r9
  __int64 **i; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rsi
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // edi
  __int64 *v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // r9
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF
  __int64 v24; // [rsp+58h] [rbp+10h]
  unsigned int v25; // [rsp+60h] [rbp+18h] BYREF

  v24 = a2;
  v5 = a2;
  v6 = SystemCursorService2::InputTypeToCursorDeviceTypeId(*a3);
  v7 = (__int64 ***)a1[8];
  for ( i = *v7; i != (__int64 **)v7; i = (__int64 **)*i )
  {
    v9 = i[3];
    if ( *((_DWORD *)v9 + 4) == v6 )
    {
      v10 = *v9;
      v23 = v5;
      *(_QWORD *)std::unordered_map<unsigned __int64,unsigned __int64>::operator[](a1 + 23, &v23) = v10;
      v11 = a3[1];
      v12 = SystemCursor2::SetRasterizationScale((SystemCursor2 *)i[3], v11);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice2.cpp",
          (const char *)(unsigned int)v12);
        return v13;
      }
      v15 = i[3];
      v16 = HIDWORD(v24);
      v17 = *a3;
      v25 = 0;
      LODWORD(v23) = 0;
      *((_DWORD *)v15 + 5) = v11;
      i[3][23] = v16;
      if ( SystemCursorController2::GetAndRemoveInitialCursorPositionForInputType(a1[2], v17, &v25, &v23) )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)i[3][21] + 16LL))(
                i[3][21],
                v25,
                (unsigned int)v23);
        v19 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x29E,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib"
                     "\\systemcursorservice2.cpp",
            (const char *)(unsigned int)v18);
          v20 = v19;
          v21 = 246LL;
          goto LABEL_11;
        }
      }
      else
      {
        v20 = 2147549183LL;
        v21 = 252LL;
LABEL_11:
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)v21,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorservice2.cpp",
          (const char *)v20);
      }
      SystemCursorService2::EnumerateCursorsForShell((SystemCursorService2 *)a1);
      return 0LL;
    }
  }
  return 0LL;
}
