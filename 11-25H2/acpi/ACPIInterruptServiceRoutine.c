/*
 * XREFs of ACPIInterruptServiceRoutine @ 0x14002D210
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPccSciReceived @ 0x14002D58C (ACPIPccSciReceived.c)
 *     CLEAR_PM1_STATUS_BITS @ 0x14002D658 (CLEAR_PM1_STATUS_BITS.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

bool __fastcall ACPIInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  __int16 v3; // bx
  int v4; // edi
  unsigned int i; // ebx
  int (__fastcall *v6)(__int64); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // esi
  int v11; // edi
  unsigned __int16 *v12; // rcx
  unsigned int v13; // ebx
  int (__fastcall *v14)(__int64); // rax
  __int64 v15; // rcx
  int v16; // edx
  signed __int32 v17; // eax
  unsigned int v18; // edi
  signed __int32 v19; // edx
  _WORD v21[28]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int8 v22; // [rsp+78h] [rbp+10h] BYREF
  char v23; // [rsp+80h] [rbp+18h] BYREF
  __int16 v24; // [rsp+88h] [rbp+20h] BYREF

  v24 = 0;
  v3 = 0;
  if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      0LL,
      0LL,
      &v24,
      2LL,
      0LL);
    v3 = v24;
  }
  if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
      3LL,
      0LL,
      &v24,
      2LL,
      0LL);
    v3 |= v24;
  }
  v4 = v3 & (*((_WORD *)AcpiInformation + 56) | 0x8401);
  for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); ++i )
  {
    v22 = 0;
    v6 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
    if ( i < *((unsigned __int16 *)AcpiInformation + 43) )
    {
      if ( v6(6LL) < 0 )
        goto LABEL_11;
      v7 = i;
      v8 = 6LL;
      goto LABEL_10;
    }
    if ( v6(7LL) >= 0 )
    {
      v7 = i - *((unsigned __int16 *)AcpiInformation + 43);
      v8 = 7LL;
LABEL_10:
      (*(void (__fastcall **)(__int64, __int64, unsigned __int8 *, __int64, _QWORD))(PmHalDispatchTable + 128))(
        v8,
        v7,
        &v22,
        1LL,
        0LL);
    }
LABEL_11:
    if ( (*((_BYTE *)GpeCurEnable + i) & v22) != 0 )
    {
      v4 |= 0x10000u;
      break;
    }
  }
  if ( (AcpiOverrideAttributes & 0x200) != 0 && !v4 )
    v4 = 0x10000;
  v9 = v4 | 0x20000;
  if ( !(unsigned __int8)ACPIPccSciReceived() )
    v9 = v4;
  v10 = v9 & 0x11;
  if ( (v9 & 0x11) != 0 )
  {
    CLEAR_PM1_STATUS_BITS(v9 & 0x11);
    if ( (v9 & 1) != 0 )
      (*(void (**)(void))(PmHalDispatchTable + 8))();
    v9 &= ~v10;
  }
  if ( v9 )
  {
    v11 = v9 | 0x10000;
    if ( (~*(_DWORD *)(a2 + 88) & v9) != 0 )
      v11 = v9;
    if ( (v11 & 0x10000) != 0 )
    {
      v12 = (unsigned __int16 *)AcpiInformation;
      v13 = 0;
      if ( *((_WORD *)AcpiInformation + 51) )
      {
        while ( 1 )
        {
          v23 = 0;
          v14 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
          if ( v13 >= v12[43] )
            break;
          if ( v14(6LL) >= 0 )
          {
            v15 = 6LL;
            v16 = *((unsigned __int16 *)AcpiInformation + 43);
LABEL_28:
            (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 136))(
              v15,
              v13 + v16,
              &v23,
              1LL,
              0LL);
          }
LABEL_29:
          v12 = (unsigned __int16 *)AcpiInformation;
          if ( ++v13 >= *((unsigned __int16 *)AcpiInformation + 51) )
            goto LABEL_30;
        }
        if ( v14(7LL) < 0 )
          goto LABEL_29;
        v15 = 7LL;
        v16 = *((unsigned __int16 *)AcpiInformation + 49) - *((unsigned __int16 *)AcpiInformation + 43);
        goto LABEL_28;
      }
    }
LABEL_30:
    v21[0] = v11;
    if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _WORD *, __int64, _QWORD))(PmHalDispatchTable + 136))(
        0LL,
        0LL,
        v21,
        2LL,
        0LL);
    if ( (*(int (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL) >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD, _WORD *, __int64, _QWORD))(PmHalDispatchTable + 136))(
        3LL,
        0LL,
        v21,
        2LL,
        0LL);
    v17 = *(_DWORD *)(a2 + 88);
    v18 = v11 | 0x80000000;
    do
    {
      v19 = v17;
      v17 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 88), v18 | v17, v17);
    }
    while ( v19 != v17 );
    v10 |= v18 & ~v17;
    if ( v10 < 0 )
      KeInsertQueueDpc((PRKDPC)(a2 + 96), 0LL, 0LL);
  }
  return v10 != 0;
}
