/*
 * XREFs of ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x18004ACB4
 * Callers:
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x18004AD1C (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
        Windows::Internal::AssignedAccess::AAManagerHelper *this,
        struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration **a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    if ( v2 != -2147221164 )
    {
      if ( v2 >= 0 )
        return (unsigned int)v2;
      v3 = 163LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this);
    if ( v2 < 0 )
    {
      v3 = 165LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}
