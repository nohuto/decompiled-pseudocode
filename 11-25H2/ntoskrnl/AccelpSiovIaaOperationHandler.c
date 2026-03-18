/*
 * XREFs of AccelpSiovIaaOperationHandler @ 0x14065A6E0
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x14065ABC4 (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     AccelpSiovCompressionDecompression @ 0x140659FE0 (AccelpSiovCompressionDecompression.c)
 *     AccelpSiovIaaQueryCompletionInformation @ 0x14065A980 (AccelpSiovIaaQueryCompletionInformation.c)
 *     AccelpSiovSetCompressionWorkspace @ 0x14065ADA4 (AccelpSiovSetCompressionWorkspace.c)
 *     IaaBuildDescriptorCommon @ 0x14065AF38 (IaaBuildDescriptorCommon.c)
 *     IaaGetStatusFromCompletionRecord @ 0x14065B394 (IaaGetStatusFromCompletionRecord.c)
 */

__int64 __fastcall AccelpSiovIaaOperationHandler(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // ecx
  int v6; // esi
  __int64 v7; // r9
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // r10
  int v17; // r11d
  unsigned int v18; // r10d
  unsigned int v19; // ecx
  __int64 result; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  char v23; // [rsp+28h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)a1;
  v6 = 87;
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 192LL);
  if ( !v5 )
  {
    *a2 = 64;
    a2[1] = 64;
    a2[2] = 64;
    goto LABEL_32;
  }
  v8 = v5 - 3;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      result = AccelpSiovIaaQueryCompletionInformation(
                 *(_QWORD *)(a1 + 24),
                 *(_QWORD *)(a1 + 32),
                 *(_DWORD *)(a1 + 48),
                 *(_DWORD *)(*(_QWORD *)a2 + 24LL),
                 *(_QWORD *)a2);
LABEL_26:
      if ( (int)result < 0 )
        return result;
      goto LABEL_32;
    }
    v10 = v9 - 5;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
              return 3221225659LL;
            v14 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
            if ( !v14 )
              return 3221225485LL;
            v15 = *(_QWORD *)(a1 + 24);
            v23 = (unsigned __int8)v7 >> 7;
            LOBYTE(v7) = *(int *)(a1 + 16) < 0;
            IaaBuildDescriptorCommon(
              67,
              v15,
              *(_QWORD *)(a1 + 32),
              v7,
              *(_DWORD *)(a1 + 16) & 0xFFFFF,
              v23,
              (*(_QWORD *)(*(_QWORD *)(v3 + 16) + 192LL) & 0x400LL) != 0);
            *(_WORD *)(v15 + 38) |= 0x11u;
            *(_QWORD *)(v15 + 24) = v14 + 13640;
            *(_QWORD *)(v15 + 16) = v16;
            *(_DWORD *)(v15 + 32) = v17;
            *(_DWORD *)(v15 + 48) = 1280;
            goto LABEL_32;
          }
          v18 = a2[2];
          if ( *(_DWORD *)(a1 + 60) == 6 )
          {
            v19 = 1631;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 60) != 7 )
              return 3221225485LL;
            v19 = 5439;
          }
          if ( *(_DWORD *)(a1 + 64) != 1 || *(_DWORD *)(a1 + 68) != 1 )
            v19 += 17600;
          a2[2] = v19;
          if ( v18 < v19 )
            return 3221225507LL;
          if ( !*(_QWORD *)a2 )
            return 3221225485LL;
          result = AccelpSiovSetCompressionWorkspace(
                     *(_QWORD *)a2,
                     v19,
                     *(_QWORD *)(a1 + 48),
                     *(unsigned int *)(a1 + 56),
                     *(_DWORD *)(a1 + 60),
                     *(_DWORD *)(a1 + 64),
                     *(_DWORD *)(a1 + 68));
          goto LABEL_26;
        }
      }
      result = AccelpSiovCompressionDecompression(
                 (int *)a1,
                 *(int *)(a1 + 16) < 0,
                 *(_DWORD *)(a1 + 16) & 0xFFFFF,
                 (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v3 + 16) + 192LL) >> 7,
                 (*(_QWORD *)(*(_QWORD *)(v3 + 16) + 192LL) & 0x400LL) != 0);
      if ( (int)result < 0 )
        return result;
      v6 = 67 - (*(_DWORD *)a1 != 11);
    }
    else
    {
      IaaBuildDescriptorCommon(
        0,
        *(_QWORD *)(a1 + 24),
        *(_QWORD *)(a1 + 32),
        *(_DWORD *)(a1 + 16) >> 31,
        *(_DWORD *)(a1 + 16) & 0xFFFFF,
        0,
        0);
      v6 = 0;
    }
LABEL_32:
    v21 = *(_QWORD *)(a1 + 40);
    v22 = *(_QWORD *)(a1 + 24);
    if ( v6 && v6 != 66 && v6 != 67 )
    {
      if ( v6 != 87 )
        return 3221225659LL;
      return 0LL;
    }
    if ( (v21 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    {
      if ( (v21 & 1) != 0 )
      {
        if ( !v6 )
          return 3221225659LL;
        *(_BYTE *)(v22 + 4) &= ~2u;
      }
      if ( (v21 & 2) != 0 )
      {
        if ( !v6 )
          return 3221225659LL;
        *(_BYTE *)(v22 + 5) &= ~1u;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  result = IaaGetStatusFromCompletionRecord(*(_QWORD *)(a1 + 32), a2, a3, v7);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
    goto LABEL_32;
  return result;
}
