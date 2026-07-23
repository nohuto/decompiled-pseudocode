/*
 * XREFs of AuthzBasepAddSecurityAttributeValues @ 0x1403BA040
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x1403B8A94 (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x1403BAA30 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1403BAA7C (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403BAD50 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttributeValues(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int i; // r12d
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 SecurityAttributeValue; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  _QWORD *v15; // rax
  int v17; // eax
  void *v18; // rcx
  size_t v19; // r8
  const void *v20; // rdx
  unsigned int v21; // edx

  if ( *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 16) )
  {
    v4 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_DWORD *)(a2 + 24) )
        return v4;
      if ( *(_WORD *)(a1 + 48) == 1 || *(_WORD *)(a1 + 48) == 2 )
        break;
      if ( *(_WORD *)(a1 + 48) == 3 )
      {
        v7 = *(_QWORD *)(a2 + 32) + 16LL * i;
        v6 = i;
        goto LABEL_11;
      }
      if ( *(_WORD *)(a1 + 48) == 4 )
      {
        v6 = i;
        v7 = *(_QWORD *)(a2 + 32) + 24LL * i;
        goto LABEL_11;
      }
      if ( *(_WORD *)(a1 + 48) != 5 )
      {
        if ( *(_WORD *)(a1 + 48) == 6 )
          break;
        if ( *(_WORD *)(a1 + 48) != 16 )
          return (unsigned int)-1073741811;
      }
      v9 = (_QWORD *)(a2 + 32);
      v6 = i;
      SecurityAttributeValue = AuthzBasepFindSecurityAttributeValue(a1, *(_QWORD *)(a2 + 32) + 16LL * i);
LABEL_12:
      v10 = SecurityAttributeValue;
      if ( !SecurityAttributeValue )
      {
        v11 = 0;
        switch ( *(_WORD *)(a2 + 16) )
        {
          case 3:
            v11 = *(unsigned __int16 *)(*v9 + 16LL * i);
            break;
          case 4:
            v11 = *(unsigned __int16 *)(*v9 + 24LL * i + 8);
            break;
          case 5:
          case 0x10:
            v11 = *(_DWORD *)(*v9 + 16LL * i + 8);
            break;
        }
        v12 = AuthzBasepAllocateSecurityAttributeValue(v11);
        v13 = v12;
        if ( !v12 )
          return (unsigned int)-1073741670;
        switch ( *(_WORD *)(a2 + 16) )
        {
          case 1:
          case 2:
LABEL_24:
            *(_QWORD *)(v12 + 40) = *(_QWORD *)(*v9 + 8 * v6);
            break;
          case 3:
            v18 = (void *)(v12 + 64);
            v19 = *(unsigned __int16 *)(*v9 + 16LL * i);
            *(_WORD *)(v12 + 40) = v19;
            *(_WORD *)(v12 + 42) = v19;
            *(_QWORD *)(v12 + 48) = v12 + 64;
            v20 = *(const void **)(*v9 + 16LL * i + 8);
            goto LABEL_36;
          case 4:
            *(_QWORD *)(v12 + 40) = *(_QWORD *)(*v9 + 24 * v6);
            v18 = (void *)(v12 + 64);
            v21 = *(unsigned __int16 *)(*v9 + 24 * v6 + 8);
            *(_WORD *)(v12 + 48) = v21;
            v19 = v21;
            *(_QWORD *)(v12 + 56) = v12 + 64;
            v20 = *(const void **)(*v9 + 24 * v6 + 16);
LABEL_36:
            memmove(v18, v20, v19);
            break;
          case 5:
            goto LABEL_42;
          case 6:
            goto LABEL_24;
          case 0x10:
LABEL_42:
            v18 = (void *)(v12 + 64);
            v19 = *(unsigned int *)(*v9 + 16 * v6 + 8);
            *(_DWORD *)(v12 + 48) = v19;
            *(_QWORD *)(v12 + 40) = v12 + 64;
            v20 = *(const void **)(*v9 + 16 * v6);
            goto LABEL_36;
        }
        if ( (*(_DWORD *)(v13 + 32) & 2) == 0 )
        {
          v14 = *(_QWORD **)(a1 + 104);
          v15 = (_QWORD *)(v13 + 16);
          if ( *v14 != a1 + 96 )
            __fastfail(3u);
          *v15 = a1 + 96;
          *(_QWORD *)(v13 + 24) = v14;
          *v14 = v15;
          *(_QWORD *)(a1 + 104) = v15;
          *(_DWORD *)(v13 + 32) |= 2u;
          ++*(_DWORD *)(a1 + 88);
        }
        continue;
      }
      v17 = *(_DWORD *)(SecurityAttributeValue + 32);
      if ( (v17 & 4) == 0 )
        return (unsigned int)-1073741771;
      *(_DWORD *)(v10 + 32) = v17 & 0xFFFFFFFB;
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, v10, 0LL);
      --*(_DWORD *)(a1 + 64);
    }
    v6 = i;
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * i);
LABEL_11:
    SecurityAttributeValue = AuthzBasepFindSecurityAttributeValue(a1, v7);
    v9 = (_QWORD *)(a2 + 32);
    goto LABEL_12;
  }
  return (unsigned int)-1073741811;
}
