/*
 * XREFs of ??1ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@AEAA@XZ @ 0x1802CAA44
 * Callers:
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x1802CEC30 (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::~ReferencedGitCookie(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 4) )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_18040AD80 + 32LL))(qword_18040AD80);
  return result;
}
