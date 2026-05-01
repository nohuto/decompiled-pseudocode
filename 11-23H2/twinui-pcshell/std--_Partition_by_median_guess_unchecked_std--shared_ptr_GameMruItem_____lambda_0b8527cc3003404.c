/*
 * XREFs of std::_Partition_by_median_guess_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1803E1F80
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1800AD6DC (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 * Callees:
 *     std::_Med3_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1803E1F08 (std--_Med3_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
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
  __int64 **i; // rax
  __int64 ***v19; // rcx
  __int64 **v20; // r8
  __int64 *v21; // rcx
  __int64 ***v22; // r8
  __int64 ***v23; // r9
  __int64 v24; // rcx
  __int64 **v25; // rax
  __int64 **v26; // rcx
  bool v27; // zf
  __int64 ***v28; // r10
  __int64 *v29; // rcx
  __int64 **v30; // rax
  __int64 **v31; // rcx
  __int64 **v32; // rcx
  __int64 **v33; // rax
  __int64 **v34; // rcx
  __int64 **v35; // rcx
  __int64 **v36; // rax
  __int64 **v37; // rcx
  __int64 ***v38; // r10
  __int64 **v39; // rcx
  __int64 **v40; // rax
  __int64 **v41; // rcx
  __int64 **v42; // rcx
  __int64 **v43; // rax
  __int64 **v44; // rcx
  __int64 **v45; // rcx
  __int64 **v46; // rax
  __int64 **v47; // rcx
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
    for ( i = *v5; ; i = v20 )
    {
      v19 = v5 - 2;
      v20 = *(v5 - 2);
      if ( (__int64)*i < (__int64)*v20 )
        break;
      if ( (__int64)*i > (__int64)*v20 )
        break;
      v5 -= 2;
      if ( a2 >= v19 )
        break;
    }
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v21 = **v5;
    do
    {
      if ( (__int64)v21 < (__int64)**v17 )
        break;
      if ( (__int64)v21 > (__int64)**v17 )
        break;
      v17 += 2;
    }
    while ( (unsigned __int64)v17 < a3 );
  }
  v22 = v17;
  v23 = v5;
  while ( 1 )
  {
    while ( (unsigned __int64)v22 < a3 )
    {
      v24 = (__int64)**v22;
      if ( v24 < (__int64)**v5 )
        goto LABEL_21;
      if ( v24 > (__int64)**v5 )
        break;
      if ( v17 != v22 )
      {
        v25 = *v17;
        *v17 = *v22;
        *v22 = v25;
        v26 = v17[1];
        v17[1] = v22[1];
        v22[1] = v26;
      }
      v17 += 2;
LABEL_21:
      v22 += 2;
    }
    v27 = v23 == a2;
    if ( v23 > a2 )
    {
      v28 = v23 - 2;
      do
      {
        v29 = **v5;
        if ( (__int64)v29 >= (__int64)**v28 )
        {
          if ( (__int64)v29 > (__int64)**v28 )
            break;
          v5 -= 2;
          if ( v5 != v28 )
          {
            v30 = *v5;
            *v5 = *v28;
            *v28 = v30;
            v31 = v5[1];
            v5[1] = v28[1];
            v28[1] = v31;
          }
        }
        v23 -= 2;
        v28 -= 2;
      }
      while ( a2 < v23 );
      v27 = v23 == a2;
    }
    if ( v27 )
      break;
    v23 -= 2;
    if ( v22 != (__int64 ***)a3 )
    {
      v45 = *v22;
      *v22 = *v23;
      v46 = v23[1];
      *v23 = v45;
      v47 = v22[1];
      v22[1] = v46;
      v23[1] = v47;
      goto LABEL_21;
    }
    v5 -= 2;
    v38 = v5 + 1;
    if ( v23 != v5 )
    {
      v39 = *v23;
      *v23 = *v5;
      v40 = *v38;
      *v5 = v39;
      v41 = v23[1];
      v23[1] = v40;
      *v38 = v41;
    }
    v42 = *v5;
    v17 -= 2;
    *v5 = *v17;
    v43 = v17[1];
    *v17 = v42;
    v44 = *v38;
    *v38 = v43;
    v17[1] = v44;
  }
  if ( v22 != (__int64 ***)a3 )
  {
    if ( v17 != v22 )
    {
      v32 = *v5;
      *v5 = *v17;
      v33 = v17[1];
      *v17 = v32;
      v34 = v5[1];
      v5[1] = v33;
      v17[1] = v34;
    }
    v35 = *v5;
    v17 += 2;
    *v5 = *v22;
    v36 = v22[1];
    *v22 = v35;
    v37 = v5[1];
    v5[1] = v36;
    v5 += 2;
    v22[1] = v37;
    goto LABEL_21;
  }
  result = a1;
  *a1 = v5;
  a1[1] = v17;
  return result;
}
