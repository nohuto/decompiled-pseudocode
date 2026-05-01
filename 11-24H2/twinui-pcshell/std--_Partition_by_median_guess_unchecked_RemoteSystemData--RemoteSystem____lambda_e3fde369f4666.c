/*
 * XREFs of std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645498
 * Callers:
 *     std::_Sort_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x1806458C8 (std--_Sort_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1__.c)
 * Callees:
 *     std::_Guess_median_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___ @ 0x180645124 (std--_Guess_median_unchecked_RemoteSystemData--RemoteSystem____lambda_e3fde369f46668a79a17c803ab.c)
 *     ??$swap@URemoteSystem@RemoteSystemData@@$0A@@std@@YAXAEAURemoteSystem@RemoteSystemData@@0@Z @ 0x180648340 (--$swap@URemoteSystem@RemoteSystemData@@$0A@@std@@YAXAEAURemoteSystem@RemoteSystemData@@0@Z.c)
 */

unsigned __int64 *__fastcall std::_Partition_by_median_guess_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 *result; // rax

  v5 = a2 + 32 * ((__int64)(a3 - a2) >> 6);
  std::_Guess_median_unchecked_RemoteSystemData::RemoteSystem____lambda_e3fde369f46668a79a17c803abc8f6e1___(
    a2,
    v5,
    a3 - 32);
  v6 = v5 + 32;
  while ( a2 < v5 )
  {
    v7 = *(_QWORD *)(v5 + 16);
    if ( *(_QWORD *)(v5 - 16) < v7 || *(_QWORD *)(v5 - 16) > v7 )
      break;
    v5 -= 32LL;
  }
  if ( v6 < a3 )
  {
    v8 = *(_QWORD *)(v5 + 16);
    do
    {
      if ( *(_QWORD *)(v6 + 16) < v8 )
        break;
      if ( *(_QWORD *)(v6 + 16) > v8 )
        break;
      v6 += 32LL;
    }
    while ( v6 < a3 );
  }
  v9 = v6;
  v10 = v5;
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = v9;
      if ( v9 >= a3 )
        break;
      v12 = *(_QWORD *)(v9 + 16);
      if ( *(_QWORD *)(v5 + 16) < v12 )
        goto LABEL_18;
      if ( *(_QWORD *)(v5 + 16) > v12 )
        break;
      if ( v6 != v9 )
        std::swap<RemoteSystemData::RemoteSystem,0>(v6, v9);
      v6 += 32LL;
LABEL_18:
      v9 += 32LL;
    }
    if ( a2 < v10 )
    {
      v13 = v10 - 32;
      do
      {
        v14 = *(_QWORD *)(v5 + 16);
        if ( *(_QWORD *)(v13 + 16) >= v14 )
        {
          if ( *(_QWORD *)(v13 + 16) > v14 )
            break;
          v5 -= 32LL;
          if ( v5 != v13 )
            std::swap<RemoteSystemData::RemoteSystem,0>(v5, v13);
        }
        v10 -= 32LL;
        v13 -= 32LL;
      }
      while ( a2 < v10 );
    }
    v15 = v5;
    if ( v10 == a2 )
      break;
    v10 -= 32LL;
    if ( v9 != a3 )
    {
      v15 = v9;
      v11 = v10;
LABEL_36:
      v9 += 32LL;
      goto LABEL_37;
    }
    v5 -= 32LL;
    if ( v10 != v5 )
      std::swap<RemoteSystemData::RemoteSystem,0>(v10, v5);
    v6 -= 32LL;
    v15 = v5;
    v11 = v6;
LABEL_37:
    std::swap<RemoteSystemData::RemoteSystem,0>(v15, v11);
  }
  if ( v9 != a3 )
  {
    if ( v6 != v9 )
      std::swap<RemoteSystemData::RemoteSystem,0>(v5, v6);
    v6 += 32LL;
    v5 += 32LL;
    goto LABEL_36;
  }
  result = a1;
  *a1 = v5;
  a1[1] = v6;
  return result;
}
