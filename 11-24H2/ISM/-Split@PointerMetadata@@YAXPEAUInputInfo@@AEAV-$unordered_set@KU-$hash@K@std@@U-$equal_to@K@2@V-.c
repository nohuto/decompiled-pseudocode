/*
 * XREFs of ?Split@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@0@Z @ 0x1801A3B10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180030BEC (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x18005B26C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 */

__int64 __fastcall PointerMetadata::Split(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v3; // ebx
  unsigned int v6; // eax
  unsigned int v8; // ebp
  int v9; // r14d
  __int64 v10; // r15
  _OWORD *v11; // rax
  _OWORD *v12; // rdx
  int v13; // ecx
  _OWORD *v14; // rdx
  _OWORD *v15; // rax
  int v16; // edx
  int v17; // ecx
  __int64 result; // rax
  int v19; // ecx
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  *(_DWORD *)(a3 + 316) = 0;
  v6 = *(_DWORD *)(a1 + 316);
  v8 = 0;
  if ( !v6 )
    goto LABEL_10;
  v9 = 0;
  do
  {
    v10 = 144LL * v8;
    v20 = *(_DWORD *)(v10 + a1 + 324);
    if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
           a2,
           &v20) )
    {
      v11 = (_OWORD *)(v10 + a1 + 320);
      v12 = (_OWORD *)(a3 + 144LL * *(unsigned int *)(a3 + 316) + 320);
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12[7] = v11[7];
      v12[8] = v11[8];
      ++*(_DWORD *)(a3 + 316);
    }
    else
    {
      v13 = v9;
      if ( !v9 )
        goto LABEL_8;
      v14 = (_OWORD *)(a1 + 144LL * (v8 - v9) + 320);
      v15 = (_OWORD *)(v10 + a1 + 320);
      *v14 = *v15;
      v14[1] = v15[1];
      v14[2] = v15[2];
      v14[3] = v15[3];
      v14[4] = v15[4];
      v14[5] = v15[5];
      v14[6] = v15[6];
      v14[7] = v15[7];
      v14[8] = v15[8];
    }
    v13 = *(_DWORD *)(a3 + 316);
LABEL_8:
    v6 = *(_DWORD *)(a1 + 316);
    ++v8;
    v9 = v13;
  }
  while ( v8 < v6 );
  v3 = v13;
LABEL_10:
  v16 = 464;
  *(_DWORD *)(a1 + 316) = v6 - v3;
  v17 = *(_DWORD *)(a3 + 316);
  if ( v17 )
    result = PointerInputInfo::GetSizeForPointerCount(v17);
  else
    result = 464LL;
  *(_DWORD *)(a3 + 24) = result;
  v19 = *(_DWORD *)(a1 + 316);
  if ( v19 )
  {
    result = PointerInputInfo::GetSizeForPointerCount(v19);
    v16 = result;
  }
  *(_DWORD *)(a1 + 24) = v16;
  return result;
}
