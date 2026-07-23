/*
 * XREFs of AccelpSiovIaaOperationHandler @ 0x140664C80
 * Callers:
 *     AccelpSiovInternalOperationHandler @ 0x140402CBC (AccelpSiovInternalOperationHandler.c)
 * Callees:
 *     IaaBuildDescriptorCommon @ 0x140473A54 (IaaBuildDescriptorCommon.c)
 *     AccelpSiovCompressionDecompression @ 0x140664970 (AccelpSiovCompressionDecompression.c)
 *     AccelpSiovIaaQueryCompletionInformation @ 0x140664F20 (AccelpSiovIaaQueryCompletionInformation.c)
 *     AccelpSiovSetCompressionWorkspace @ 0x140665164 (AccelpSiovSetCompressionWorkspace.c)
 *     IaaGetStatusFromCompletionRecord @ 0x140665764 (IaaGetStatusFromCompletionRecord.c)
 */

__int64 __fastcall AccelpSiovIaaOperationHandler(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // ecx
  int v6; // esi
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // r10
  int v16; // r11d
  unsigned int v17; // r10d
  unsigned int v18; // ecx
  __int64 result; // rax
  __int64 v20; // r8
  __int64 v21; // rdx

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)a1;
  v6 = 87;
  if ( !v5 )
  {
    *a2 = 64;
    a2[1] = 64;
    a2[2] = 64;
    goto LABEL_32;
  }
  v7 = v5 - 3;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( !v8 )
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
    v9 = v8 - 5;
    if ( v9 )
    {
      v10 = v9 - 2;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              return 3221225659LL;
            v13 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL);
            if ( !v13 )
              return 3221225485LL;
            v14 = *(_QWORD *)(a1 + 24);
            IaaBuildDescriptorCommon(
              67,
              (int *)v14,
              *(_QWORD *)(a1 + 32),
              *(int *)(a1 + 16) < 0,
              *(_DWORD *)(a1 + 16) & 0xFFFFF,
              (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v3 + 16) + 192LL) >> 7,
              (*(_QWORD *)(*(_QWORD *)(v3 + 16) + 192LL) & 0x400LL) != 0);
            *(_WORD *)(v14 + 38) |= 0x11u;
            *(_QWORD *)(v14 + 24) = v13 + 13640;
            *(_QWORD *)(v14 + 16) = v15;
            *(_DWORD *)(v14 + 32) = v16;
            *(_DWORD *)(v14 + 48) = 1280;
            goto LABEL_32;
          }
          v17 = a2[2];
          if ( *(_DWORD *)(a1 + 60) == 6 )
          {
            v18 = 1631;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 60) != 7 )
              return 3221225485LL;
            v18 = 5439;
          }
          if ( *(_DWORD *)(a1 + 64) != 1 || *(_DWORD *)(a1 + 68) != 1 )
            v18 += 17600;
          a2[2] = v18;
          if ( v17 < v18 )
            return 3221225507LL;
          if ( !*(_QWORD *)a2 )
            return 3221225485LL;
          result = AccelpSiovSetCompressionWorkspace(
                     *(_QWORD *)a2,
                     v18,
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
        *(int **)(a1 + 24),
        *(_QWORD *)(a1 + 32),
        *(int *)(a1 + 16) < 0,
        *(_DWORD *)(a1 + 16) & 0xFFFFF,
        0,
        0);
      v6 = 0;
    }
LABEL_32:
    v20 = *(_QWORD *)(a1 + 40);
    v21 = *(_QWORD *)(a1 + 24);
    if ( v6 && v6 != 66 && v6 != 67 )
    {
      if ( v6 != 87 )
        return 3221225659LL;
      return 0LL;
    }
    if ( (v20 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    {
      if ( (v20 & 1) != 0 )
      {
        if ( !v6 )
          return 3221225659LL;
        *(_BYTE *)(v21 + 4) &= ~2u;
      }
      if ( (v20 & 2) != 0 )
      {
        if ( !v6 )
          return 3221225659LL;
        *(_BYTE *)(v21 + 5) &= ~1u;
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  result = IaaGetStatusFromCompletionRecord(*(_QWORD *)(a1 + 32), a2, a3, *(_QWORD *)(*(_QWORD *)(v3 + 16) + 192LL));
  if ( (int)result >= 0 && (_DWORD)result != 259 )
    goto LABEL_32;
  return result;
}
