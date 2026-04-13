/*
 * XREFs of ?uflow@?$basic_streambuf@GU?$char_traits@G@std@@@std@@MEAAGXZ @ 0x18005E8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::basic_streambuf<unsigned short>::uflow(__int64 a1)
{
  __int16 v2; // ax
  unsigned __int16 v3; // dx
  unsigned __int16 **v4; // rcx
  unsigned __int16 *v5; // rdx

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  v3 = -1;
  if ( v2 != -1 )
  {
    --**(_DWORD **)(a1 + 80);
    v4 = *(unsigned __int16 ***)(a1 + 56);
    v5 = (*v4)++;
    return *v5;
  }
  return v3;
}
