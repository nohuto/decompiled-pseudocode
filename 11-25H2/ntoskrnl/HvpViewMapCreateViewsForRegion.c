/*
 * XREFs of HvpViewMapCreateViewsForRegion @ 0x140884B94
 * Callers:
 *     HvpViewMapExtendStorage @ 0x1408834A4 (HvpViewMapExtendStorage.c)
 *     HvpViewMapStart @ 0x1409F9A08 (HvpViewMapStart.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     CmSiGetMemoryAllocationGranularity @ 0x1404A82FC (CmSiGetMemoryAllocationGranularity.c)
 *     HvpViewMapMakeViewRangeValid @ 0x140883560 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x140884E10 (HvpViewMapCreateView.c)
 *     HvpViewMapFreeView @ 0x140A46244 (HvpViewMapFreeView.c)
 *     HvpDetermineFinalViewReservationEnd @ 0x140A4D054 (HvpDetermineFinalViewReservationEnd.c)
 */

__int64 __fastcall HvpViewMapCreateViewsForRegion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v4; // rbx
  __int64 v7; // r14
  __int64 MemoryAllocationGranularity; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // r13
  int v13; // eax
  int ViewRangeValid; // edi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 *v18; // rdi
  unsigned __int64 v19; // rdx
  bool v20; // r8
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // [rsp+30h] [rbp-18h] BYREF
  _QWORD **v27; // [rsp+38h] [rbp-10h]
  _QWORD *v29; // [rsp+98h] [rbp+50h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+58h]
  char v31; // [rsp+A8h] [rbp+60h]

  v31 = a4;
  v4 = 0LL;
  v27 = &v26;
  v29 = 0LL;
  v26 = &v26;
  v7 = a1;
  MemoryAllocationGranularity = CmSiGetMemoryAllocationGranularity();
  v30 = MemoryAllocationGranularity;
  v9 = 0x200000LL;
  while ( 1 )
  {
    if ( a2 >= a3 )
    {
      v16 = v26;
      v17 = *v26;
      if ( (_QWORD **)v26[1] == &v26 && *(_QWORD **)(v17 + 8) == v26 )
      {
        v26 = (_QWORD *)*v26;
        *(_QWORD *)(v17 + 8) = &v26;
        if ( v16 == &v26 )
        {
LABEL_23:
          ViewRangeValid = 0;
          goto LABEL_24;
        }
        v18 = (unsigned __int64 *)(v7 + 40);
        v4 = 0LL;
        while ( 1 )
        {
          v19 = *v18;
          if ( (*(_BYTE *)(v7 + 48) & 1) != 0 && v19 )
            v19 ^= (unsigned __int64)v18;
          v20 = 0;
          if ( v19 )
          {
            while ( 1 )
            {
              if ( v16[5] < *(_QWORD *)(v19 + 40) )
              {
                v21 = *(_QWORD *)v19;
                if ( (*(_BYTE *)(v7 + 48) & 1) != 0 )
                {
                  if ( !v21 )
                    goto LABEL_43;
                  v21 ^= v19;
                }
                if ( !v21 )
                {
LABEL_43:
                  v20 = 0;
                  break;
                }
              }
              else
              {
                v21 = *(_QWORD *)(v19 + 8);
                if ( (*(_BYTE *)(v7 + 48) & 1) != 0 )
                {
                  if ( !v21 )
                    goto LABEL_19;
                  v21 ^= v19;
                }
                if ( !v21 )
                {
LABEL_19:
                  v20 = 1;
                  break;
                }
              }
              v19 = v21;
            }
          }
          RtlRbInsertNodeEx((__int64 *)(v7 + 40), v19, v20, (unsigned __int64)v16);
          v16 = v26;
          if ( (_QWORD **)v26[1] != &v26 )
            break;
          v22 = *v26;
          if ( *(_QWORD **)(*v26 + 8LL) != v26 )
            break;
          v26 = (_QWORD *)*v26;
          *(_QWORD *)(v22 + 8) = &v26;
          if ( v16 == &v26 )
            goto LABEL_23;
        }
      }
LABEL_8:
      __fastfail(3u);
    }
    v10 = a2 & -MemoryAllocationGranularity;
    if ( v9 <= a3 - v10 )
    {
      v11 = v9 + v10;
      v12 = v9 + v10;
    }
    else
    {
      v11 = HvpDetermineFinalViewReservationEnd(v7, v10, a3, v9);
      v12 = a3;
    }
    v13 = HvpViewMapCreateView(a1, v10, v11, &v29);
    v4 = v29;
    ViewRangeValid = v13;
    if ( v13 < 0 )
      break;
    ViewRangeValid = HvpViewMapMakeViewRangeValid(a1, v29, a2, v12, v31);
    if ( ViewRangeValid < 0 )
      goto LABEL_28;
    v15 = v27;
    if ( *v27 != &v26 )
      goto LABEL_8;
    v4[1] = v27;
    *v4 = &v26;
    a2 = v11;
    *v15 = v4;
    v27 = (_QWORD **)v4;
    v4 = 0LL;
    v29 = 0LL;
LABEL_33:
    MemoryAllocationGranularity = v30;
    v7 = a1;
  }
  if ( v9 > v30 )
  {
    v9 /= 2LL;
    goto LABEL_33;
  }
LABEL_28:
  v7 = a1;
LABEL_24:
  if ( v4 )
    HvpViewMapFreeView(v7, v4);
  v23 = v26;
  if ( v26 != &v26 )
  {
    v25 = (_QWORD *)*v26;
    if ( (_QWORD **)v26[1] == &v26 )
    {
      while ( (_QWORD *)v25[1] == v23 )
      {
        v26 = v25;
        v25[1] = &v26;
        if ( v23 == &v26 )
          return (unsigned int)ViewRangeValid;
        HvpViewMapFreeView(v7, v23);
        v23 = v26;
        if ( (_QWORD **)v26[1] != &v26 )
          goto LABEL_8;
        v25 = (_QWORD *)*v26;
      }
    }
    goto LABEL_8;
  }
  return (unsigned int)ViewRangeValid;
}
