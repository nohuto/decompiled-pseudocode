/*
 * XREFs of ?GetProcessArgsByPID@Common@@YAJKPEAGPEAK@Z @ 0x18003F574
 * Callers:
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F314 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002284 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Common::GetProcessArgsByPID(DWORD dwProcessId, _WORD *a2, unsigned __int16 *a3, unsigned int *a4)
{
  _WORD *v5; // rdi
  NTSTATUS v6; // ebp
  unsigned int v7; // esi
  unsigned __int16 *v8; // r14
  unsigned __int64 v9; // rdx
  HANDLE v10; // r15
  signed int LastError; // eax
  signed int v12; // ebx
  unsigned int v13; // ebx
  __int16 v14; // r9
  __int64 v15; // r8
  int v16; // ecx
  _WORD *v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r8
  __int16 v21; // ax
  _WORD *v22; // rax
  ULONG ProcessInformationLength; // [rsp+78h] [rbp+10h] BYREF

  ProcessInformationLength = 512;
  v5 = a2;
  v6 = -1073741820;
  v7 = 0;
  v8 = 0LL;
  if ( !a2 || !a3 )
    return 2147500035LL;
  *a2 = 0;
  v10 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( !v10 )
  {
    LastError = GetLastError();
    v12 = LastError;
    if ( LastError > 0 )
      v12 = (unsigned __int16)LastError | 0x80070000;
    if ( v12 < 0 )
      goto LABEL_42;
  }
  v13 = 0;
  do
  {
    if ( v13 >= 2 )
      goto LABEL_15;
    if ( ProcessInformationLength > 0x10000 )
      break;
    operator delete(v8, (const struct std::nothrow_t *)v9);
    v8 = (unsigned __int16 *)operator new[](
                               ProcessInformationLength + 2LL,
                               (const struct std::nothrow_t *)&std::nothrow);
    if ( !v8 )
    {
      v6 = -1073741801;
      goto LABEL_15;
    }
    ++v13;
    v6 = NtQueryInformationProcess(
           v10,
           ProcessImageFileMapping|ProcessUserModeIOPL,
           v8,
           ProcessInformationLength,
           &ProcessInformationLength);
  }
  while ( v6 == -1073741820 );
  if ( v6 < 0 )
  {
LABEL_15:
    v12 = v6 | 0x10000000;
    goto LABEL_42;
  }
  v12 = 0;
  v14 = 34;
  v15 = *v8 >> 1;
  v8[v15 + 8] = 0;
  v16 = 1;
  if ( v8[8] != 34 )
    v14 = 32;
  if ( (unsigned int)v15 > 1 )
  {
    v17 = v8 + 9;
    while ( 1 )
    {
      v9 = (unsigned int)(v16 + 1);
      if ( *v17 == v14 )
        break;
      ++v17;
      ++v16;
      if ( (unsigned int)v9 >= (unsigned int)v15 )
        goto LABEL_41;
    }
    v7 = v15 - v16;
    v9 = (unsigned __int64)&v8[v9 + 8];
    if ( v9 )
    {
      if ( v7 )
      {
        do
        {
          if ( *(_WORD *)v9 != 32 )
            break;
          v9 += 2LL;
          --v7;
        }
        while ( v7 );
        v18 = *(unsigned int *)a3;
        v19 = v18 - 1;
        if ( v7 < (int)v18 - 1 )
          v19 = v7;
        v7 = v19;
        if ( (unsigned __int64)(v18 - 1) > 0x7FFFFFFE )
        {
          v12 = -2147024809;
          if ( *(_DWORD *)a3 )
LABEL_40:
            *v5 = 0;
        }
        else
        {
          if ( v19 > 0x7FFFFFFEuLL )
          {
            v12 = -2147024809;
            goto LABEL_40;
          }
          v20 = v19 - v18;
          v9 -= (unsigned __int64)v5;
          do
          {
            if ( !(v20 + v18) )
              break;
            v21 = *(_WORD *)((char *)v5 + v9);
            if ( !v21 )
              break;
            *v5++ = v21;
            --v18;
          }
          while ( v18 );
          v22 = v5 - 1;
          if ( v18 )
            v22 = v5;
          v12 = v18 == 0 ? 0x8007007A : 0;
          *v22 = 0;
        }
      }
    }
  }
LABEL_41:
  *(_DWORD *)a3 = v7;
LABEL_42:
  operator delete(v8, (const struct std::nothrow_t *)v9);
  if ( v10 )
    CloseHandle(v10);
  return (unsigned int)v12;
}
