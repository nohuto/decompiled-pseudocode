/*
 * XREFs of AllocQueue @ 0x140052060
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 * Callees:
 *     ApiSetEditionIsGetKeyStateBlocked @ 0x140024704 (ApiSetEditionIsGetKeyStateBlocked.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     ?Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z @ 0x14005264C (-Win32AllocateFromPagedLookasideListImpl@@YAPEAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_QWORD *__fastcall AllocQueue(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 UserSessionState; // rax
  _QWORD *result; // rax
  int v6; // ebx
  unsigned __int64 v7; // rcx
  int i; // ebx
  unsigned int v9; // eax
  unsigned __int64 v10; // rdi
  int v11; // esi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  void (__fastcall *v15)(_QWORD *, __int64); // rax
  __int64 v16; // rax
  __int128 v17; // xmm1
  _OWORD *v18; // rax

  v2 = (_QWORD *)a2;
  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 440);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(a1);
    result = Win32AllocateFromPagedLookasideListImpl(*(void **)(UserSessionState + 16864));
    v2 = result;
    if ( !result )
      return result;
    result[66] = 0LL;
    v6 = 0;
    *result = 0LL;
    result[1] = 0LL;
    *((_DWORD *)result + 4) = 0;
  }
  memset(v2 + 3, 0, 0x218uLL);
  *((_DWORD *)v2 + 110) = v6;
  *((_DWORD *)v2 + 11) = 2;
  v2[8] = v2;
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_DWORD *)v2 + 114) = v7;
  if ( a1 )
  {
    v16 = *(_QWORD *)(a1 + 472);
    *(_OWORD *)(v2 + 35) = *(_OWORD *)(v16 + 280);
    *(_OWORD *)(v2 + 37) = *(_OWORD *)(v16 + 296);
    *(_OWORD *)(v2 + 39) = *(_OWORD *)(v16 + 312);
    v17 = *(_OWORD *)(v16 + 328);
  }
  else
  {
    if ( (unsigned int)ApiSetEditionIsGetKeyStateBlocked() )
    {
      for ( i = 0; i < 256; ++i )
      {
        if ( (unsigned __int8)i < 0x20u )
          goto LABEL_11;
        v9 = 0;
        v7 = (unsigned __int64)byte_14025E220;
        while ( v9 < 0xE )
        {
          if ( *(_BYTE *)v7 == (_BYTE)i )
            goto LABEL_11;
          ++v9;
          ++v7;
        }
        if ( (unsigned __int8)i == 165 )
        {
LABEL_11:
          v10 = (unsigned __int64)(unsigned __int8)i >> 2;
          v11 = i & 3;
          if ( (*(_BYTE *)(v10 + W32GetUserSessionState(v7) + 14336) & (unsigned __int8)(1 << (2 * v11))) != 0 )
            *((_BYTE *)v2 + v10 + 280) |= 1 << (2 * v11);
          v12 = W32GetUserSessionState((unsigned int)(2 * v11));
          v7 = (unsigned int)(2 * v11 + 1);
          if ( (*(_BYTE *)(v10 + v12 + 14336) & (unsigned __int8)(1 << (2 * v11 + 1))) != 0 )
            *((_BYTE *)v2 + v10 + 280) |= 1 << (2 * v11 + 1);
        }
        else
        {
          switch ( (char)i )
          {
            case 91:
            case 92:
            case -96:
            case -95:
            case -94:
            case -93:
            case -92:
              goto LABEL_11;
            default:
              continue;
          }
        }
      }
      goto LABEL_19;
    }
    v18 = (_OWORD *)W32GetUserSessionState(v7);
    *(_OWORD *)(v2 + 35) = v18[896];
    *(_OWORD *)(v2 + 37) = v18[897];
    *(_OWORD *)(v2 + 39) = v18[898];
    v17 = v18[899];
  }
  *(_OWORD *)(v2 + 41) = v17;
LABEL_19:
  if ( (*(_DWORD *)(W32GetUserSessionState(v7) + 68704) & 1) == 0 )
    --*((_DWORD *)v2 + 108);
  if ( (unsigned __int8)isChildPartition() )
    v14 = *(_QWORD *)(W32GetUserSessionState(v13) + 21936);
  else
    v14 = *(_QWORD *)(W32GetUserSessionState(v13) + 23040);
  v15 = *(void (__fastcall **)(_QWORD *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 1312LL);
  if ( v15 )
    v15(v2, v14);
  return v2;
}
