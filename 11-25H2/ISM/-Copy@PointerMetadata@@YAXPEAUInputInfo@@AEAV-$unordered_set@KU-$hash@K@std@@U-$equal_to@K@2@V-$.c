/*
 * XREFs of ?Copy@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x18019C390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x18003062C (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x18005B45C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 */

__int64 __fastcall PointerMetadata::Copy(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 i; // rdi
  _OWORD *v7; // rax
  _OWORD *v8; // rdx
  int v9; // ecx
  __int64 result; // rax
  int v11; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)(a3 + 316) = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 316); i = (unsigned int)(i + 1) )
  {
    v11 = *(_DWORD *)(a1 + 144 * i + 324);
    if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
           a2,
           &v11) )
    {
      v7 = (_OWORD *)(144 * i + a1 + 320);
      v8 = (_OWORD *)(a3 + 144LL * *(unsigned int *)(a3 + 316) + 320);
      *v8 = *v7;
      v8[1] = v7[1];
      v8[2] = v7[2];
      v8[3] = v7[3];
      v8[4] = v7[4];
      v8[5] = v7[5];
      v8[6] = v7[6];
      v8[7] = v7[7];
      v8[8] = v7[8];
      ++*(_DWORD *)(a3 + 316);
    }
  }
  v9 = *(_DWORD *)(a3 + 316);
  if ( v9 )
    result = PointerInputInfo::GetSizeForPointerCount(v9);
  else
    result = 464LL;
  *(_DWORD *)(a3 + 24) = result;
  return result;
}
