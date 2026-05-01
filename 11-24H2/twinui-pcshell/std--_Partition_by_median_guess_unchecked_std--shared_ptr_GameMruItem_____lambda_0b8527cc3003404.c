/*
 * XREFs of std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031B844
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1800BDA48 (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 * Callees:
 *     std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031B7CC (std--_Med3_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 */

__int64 ****__fastcall std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
        __int64 ****a1,
        __int64 ***a2,
        unsigned __int64 a3)
{
  __int64 ***v3; // r15
  __int64 ***v5; // rsi
  __int64 v6; // r11
  __int64 ***v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r11
  __int64 ***v12; // rdi
  __int64 v13; // r11
  __int64 v14; // r11
  __int64 ***v15; // rdx
  __int64 ***v16; // r8
  __int64 ***v17; // rdx
  __int64 *v18; // rcx
  __int64 *v19; // r9
  __int64 ***v20; // r8
  __int64 **v21; // rax
  __int64 *v22; // rcx
  __int64 ***v23; // r8
  __int64 ***v24; // r9
  __int64 v25; // rcx
  __int64 **v26; // rax
  __int64 **v27; // rcx
  bool v28; // zf
  __int64 ***v29; // r10
  __int64 *v30; // rcx
  __int64 **v31; // rax
  __int64 **v32; // rcx
  __int64 **v33; // rcx
  __int64 **v34; // rcx
  __int64 **v35; // rcx
  __int64 **v36; // rcx
  __int64 ***v37; // r10
  __int64 **v38; // rcx
  __int64 **v39; // rcx
  __int64 **v40; // rcx
  __int64 **v41; // rcx
  __int64 **v42; // rcx
  __int64 **v43; // rcx
  __int64 ****result; // rax

  v3 = (__int64 ***)(a3 - 16);
  v5 = &a2[2 * ((__int64)(a3 - (_QWORD)a2) >> 5)];
  v6 = (__int64)(a3 - 16 - (_QWORD)a2) >> 4;
  v9 = a2;
  if ( v6 <= 40 )
  {
    v16 = (__int64 ***)(a3 - 16);
  }
  else
  {
    v10 = (v6 + 1) >> 3;
    v11 = 2 * v10;
    v10 *= 32LL;
    v12 = &a2[v11];
    std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
      a2,
      &a2[v11],
      (__int64 ***)((char *)a2 + v10));
    std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
      (__int64 ***)((char *)v5 - v13),
      v5,
      (__int64 ***)((char *)v5 + v13));
    std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
      (__int64 ***)((char *)v3 - v10),
      (__int64 ***)((char *)v3 - v14),
      v3);
    v16 = v15;
    v9 = v12;
  }
  std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(v9, v5, v16);
  v17 = v5 + 2;
  if ( a2 < v5 )
  {
    v18 = **v5;
    do
    {
      v19 = v18;
      v20 = v5 - 2;
      v21 = *(v5 - 2);
      v18 = *v21;
      if ( (__int64)v19 < (__int64)*v21 )
        break;
      if ( (__int64)v19 > (__int64)*v21 )
        break;
      v5 -= 2;
    }
    while ( a2 < v20 );
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v22 = **v5;
    do
    {
      if ( (__int64)v22 < (__int64)**v17 )
        break;
      if ( (__int64)v22 > (__int64)**v17 )
        break;
      v17 += 2;
    }
    while ( (unsigned __int64)v17 < a3 );
  }
  v23 = v17;
  v24 = v5;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v23 < a3 )
      {
        v25 = (__int64)**v23;
        if ( v25 < (__int64)**v5 )
          goto LABEL_39;
        if ( v25 <= (__int64)**v5 )
        {
          if ( v17 != v23 )
          {
            v26 = *v17;
            *v17 = *v23;
            *v23 = v26;
            v27 = v17[1];
            v17[1] = v23[1];
            v23[1] = v27;
          }
          v17 += 2;
          goto LABEL_39;
        }
      }
      v28 = v24 == a2;
      if ( v24 > a2 )
      {
        v29 = v24 - 2;
        do
        {
          v30 = **v5;
          if ( (__int64)v30 >= (__int64)**v29 )
          {
            if ( (__int64)v30 > (__int64)**v29 )
              break;
            v5 -= 2;
            if ( v5 != v29 )
            {
              v31 = *v5;
              *v5 = *v29;
              *v29 = v31;
              v32 = v5[1];
              v5[1] = v29[1];
              v29[1] = v32;
            }
          }
          v24 -= 2;
          v29 -= 2;
        }
        while ( a2 < v24 );
        v28 = v24 == a2;
      }
      if ( v28 )
        break;
      v24 -= 2;
      if ( v23 != (__int64 ***)a3 )
      {
        v42 = *v23;
        *v23 = *v24;
        *v24 = v42;
        v43 = v23[1];
        v23[1] = v24[1];
        v24[1] = v43;
        goto LABEL_39;
      }
      v5 -= 2;
      v37 = v5 + 1;
      if ( v24 != v5 )
      {
        v38 = *v24;
        *v24 = *v5;
        *v5 = v38;
        v39 = v24[1];
        v24[1] = *v37;
        *v37 = v39;
      }
      v40 = *v5;
      v17 -= 2;
      *v5 = *v17;
      *v17 = v40;
      v41 = *v37;
      *v37 = v17[1];
      v17[1] = v41;
    }
    if ( v23 == (__int64 ***)a3 )
      break;
    if ( v17 != v23 )
    {
      v33 = *v5;
      *v5 = *v17;
      *v17 = v33;
      v34 = v5[1];
      v5[1] = v17[1];
      v17[1] = v34;
    }
    v35 = *v5;
    v17 += 2;
    *v5 = *v23;
    *v23 = v35;
    v36 = v5[1];
    v5[1] = v23[1];
    v5 += 2;
    v23[1] = v36;
LABEL_39:
    v23 += 2;
  }
  result = a1;
  *a1 = v5;
  a1[1] = v17;
  return result;
}
