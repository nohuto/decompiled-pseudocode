/*
 * XREFs of CmpIsKcbInvolvedInVirtualization @ 0x140872880
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 */

bool __fastcall CmpIsKcbInvolvedInVirtualization(__int64 a1)
{
  int v2; // edi
  struct _PRIVILEGE_SET *Pool; // rdx
  __int64 v4; // rax
  __int16 j; // ax
  char v6; // di
  PPRIVILEGE_SET v7; // rcx
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v10; // r8
  __int128 v11; // [rsp+20h] [rbp-28h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 32) == CmpMasterHive )
    return 0;
  if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    return 1;
  v2 = *(__int16 *)(a1 + 66);
  Pool = 0LL;
  v11 = 0LL;
  WORD1(v11) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( v2 < 2
    || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, 8LL * (unsigned int)(v2 - 1), 0x35364D43u)) != 0LL )
  {
    v4 = *(__int16 *)(a1 + 66);
    Privileges[1] = Pool;
    WORD1(v11) = v4;
    if ( (_WORD)v4 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; LOWORD(v4) = v4 - 1 )
      {
        v10 = *(struct _PRIVILEGE_SET **)(i + 16);
        if ( (__int16)v4 >= 2 )
        {
          *((_QWORD *)Pool + (__int16)v4 - 2) = v10;
        }
        else
        {
          Privileges[(__int16)v4 - 1] = v10;
          Pool = Privileges[1];
        }
        i = *(_QWORD *)(i + 24);
      }
    }
    else
    {
      Privileges[v4 - 1] = (PPRIVILEGE_SET)a1;
      Pool = Privileges[1];
    }
  }
  else
  {
    Pool = Privileges[1];
  }
  for ( j = WORD1(v11); ; --j )
  {
    v6 = 1;
    if ( j < 0 )
      break;
    v7 = j >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)Pool + j - 2) : Privileges[j - 1];
    if ( HIWORD(v7[3].Control) && BYTE1(v7[3].Control) == 1 )
      break;
    if ( v7[2].PrivilegeCount != -1 )
    {
      v6 = 0;
      break;
    }
  }
  if ( Pool )
    CmSiFreeMemory(Pool);
  if ( v6 || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4112LL) & 0x10) != 0 )
    return 1;
  return (*(_DWORD *)(a1 + 184) & 0x2000000) != 0;
}
