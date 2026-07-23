/*
 * XREFs of KiAdjustTimer2DueTimes @ 0x140449E60
 * Callers:
 *     KiAdjustTimerDueTimes @ 0x1404E0430 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KiSendClockInterruptToTargetProcessor @ 0x1403179A4 (KiSendClockInterruptToTargetProcessor.c)
 *     KiInsertTimer2 @ 0x1403AF484 (KiInsertTimer2.c)
 *     KiRemoveTimer2 @ 0x1403B04C0 (KiRemoveTimer2.c)
 *     KiRequestTimer2Expiration @ 0x14040F090 (KiRequestTimer2Expiration.c)
 *     KiShouldActivateHRTimerClock @ 0x14044A09C (KiShouldActivateHRTimerClock.c)
 *     RtlULongLongSub @ 0x140473334 (RtlULongLongSub.c)
 */

__int64 __fastcall KiAdjustTimer2DueTimes(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r10
  _QWORD *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rax
  _QWORD *i; // rbx
  __int64 v7; // r12
  _QWORD **v8; // rax
  _QWORD *v9; // r15
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  char v12; // al
  ULONGLONG *v13; // r8
  ULONGLONG v14; // rcx
  signed __int64 v15; // rdx
  signed __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  char v21; // bl
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 result; // rax
  _QWORD *v25; // r8
  ULONGLONG v26; // rcx
  _QWORD *v27; // r8
  _QWORD v28[2]; // [rsp+20h] [rbp-10h] BYREF
  char v30; // [rsp+78h] [rbp+48h] BYREF

  v1 = 0LL;
  v30 = 0;
  v2 = a1;
  v3 = v28;
  v28[1] = v28;
  v28[0] = v28;
  v4 = (__int64)&KiTimer2Collections;
  do
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( (v5 & 1) != 0 )
    {
      if ( v5 == 1 )
        goto LABEL_31;
      i = (_QWORD *)(v5 ^ (v4 | 1));
    }
    else
    {
      i = *(_QWORD **)(v4 + 8);
    }
    if ( i )
    {
      v7 = 0LL;
      if ( v1 >= 3 )
        v7 = 24LL;
      do
      {
        v8 = (_QWORD **)i[1];
        v9 = &i[v7 / 0xFFFFFFFFFFFFFFF8uLL];
        v10 = i;
        if ( v8 )
        {
          v11 = *v8;
          for ( i = (_QWORD *)i[1]; v11; v11 = (_QWORD *)*v11 )
            i = v11;
        }
        else
        {
          while ( 1 )
          {
            i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
            if ( !i || (_QWORD *)*i == v10 )
              break;
            v10 = i;
          }
        }
        v12 = *((_BYTE *)v9 + 104);
        if ( v12 != *(_BYTE *)v2 && (v12 || (*((_BYTE *)v9 + 105) & 2) == 0) )
        {
          KiRemoveTimer2((__int64)(v9 - 3));
          v2 = a1;
          v13 = v9 + 6;
          v14 = v9[6];
          v15 = *(_QWORD *)(a1 + 24);
          if ( v15 >= 0 )
          {
            if ( RtlULongLongSub(v14, v15, v13) )
              *v25 = 0LL;
            v26 = v9[7];
            if ( v26 != -1LL && RtlULongLongSub(v26, *(_QWORD *)(v2 + 24), v9 + 7) )
              *v27 = 0LL;
          }
          else
          {
            v16 = -v15;
            v17 = v14 + v16;
            if ( v14 + v16 < v14 || v17 == -1 )
              v17 = -2LL;
            v18 = v9[7];
            *v13 = v17;
            if ( v18 != -1LL )
            {
              v20 = v18 + v16;
              if ( v18 + v16 < v18 || v20 == -1 )
                v20 = -2LL;
              v9[7] = v20;
            }
          }
          v19 = v28[0];
          v3 = v9;
          if ( *(_QWORD **)(v28[0] + 8LL) != v28 )
            __fastfail(3u);
          *v9 = v28[0];
          v9[1] = v28;
          *(_QWORD *)(v19 + 8) = v9;
          v28[0] = v9;
        }
      }
      while ( i );
    }
LABEL_31:
    ++v1;
    v4 += 24LL;
  }
  while ( v4 < (__int64)&KiNextTimer2DueTime );
  v21 = 0;
  if ( v3 != v28 )
  {
    do
    {
      v22 = (__int64)(v3 - 3);
      v3 = (_QWORD *)*v3;
      KiInsertTimer2(v22, 1, (__int64)&v30);
      if ( v30 )
        v21 = 1;
    }
    while ( v3 != v28 );
    if ( v21 )
      KiRequestTimer2Expiration();
  }
  v23 = qword_140F22220;
  if ( qword_140F22220 >= (unsigned __int64)qword_140F22208 )
    v23 = qword_140F22208;
  result = KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v23);
  if ( (_BYTE)result )
    return KiSendClockInterruptToTargetProcessor(KiClockTimerOwner);
  return result;
}
