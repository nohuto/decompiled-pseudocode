/*
 * XREFs of ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K33PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18005EEB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ModernResourceEnforcer::PsmSetApplicationProperties(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        enum _PSM_APPLICATION_PRIORITY *a11)
{
  unsigned int v11; // ebx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  int v19; // eax
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h]

  v11 = 0;
  if ( __PAIR128__((unsigned __int64)a9, (unsigned __int64)a8) != 0 || a10 || a11 )
  {
    v20 = 0LL;
    v21 = 0LL;
    if ( a8 )
    {
      v13 = 2;
      HIDWORD(v21) = 2;
      v14 = 0LL;
      if ( *a8 != -1LL )
        v14 = *a8;
      *(_QWORD *)&v20 = v14;
    }
    else
    {
      v13 = HIDWORD(v21);
    }
    if ( a9 )
    {
      v13 |= 4u;
      HIDWORD(v21) = v13;
      v15 = 0LL;
      if ( *a9 != -1LL )
        v15 = *a9;
      *((_QWORD *)&v20 + 1) = v15;
    }
    if ( a10 )
    {
      v13 |= 8u;
      HIDWORD(v21) = v13;
      v16 = 0LL;
      if ( *a10 != -1LL )
        v16 = *a10;
      *(_QWORD *)&v21 = v16;
    }
    if ( a11 )
    {
      v19 = *(_DWORD *)a11;
      HIDWORD(v21) = v13 | 0x10;
      DWORD2(v21) = v19;
    }
    v17 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned int, __int128 *))this
           + 1))(
            a3,
            a4,
            a2,
            a5,
            a6,
            a7,
            &v20);
    if ( v17 >= 0 )
      return 0;
    return (unsigned int)v17;
  }
  return v11;
}
