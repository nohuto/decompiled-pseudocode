/*
 * XREFs of ?SetTestControl@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TEST_OVERRIDE@@@Z @ 0x14006F9B8
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall RAPID_HPD_MANAGER::SetTestControl(__int64 a1, int a2)
{
  if ( a2 )
  {
    if ( a2 == 1 && *(_DWORD *)(a1 + 88) != 1 )
    {
      *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000014];
      if ( ExUuidCreate((UUID *)(a1 + 36)) < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 35;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to create new activity ID, hack to just increment current Id to make new",
          35LL,
          0LL,
          0LL,
          0LL,
          0LL);
        ++*(_BYTE *)(a1 + 44);
      }
      *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 52) = 1;
      *(_DWORD *)(a1 + 80) = 4;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 52) = 0;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_OWORD *)(a1 + 36) = 0LL;
  }
  *(_DWORD *)(a1 + 88) = a2;
}
