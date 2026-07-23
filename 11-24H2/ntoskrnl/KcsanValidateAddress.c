/*
 * XREFs of KcsanValidateAddress @ 0x1405AB550
 * Callers:
 *     KasanValidateAddress @ 0x1405A6D60 (KasanValidateAddress.c)
 *     __asan_load1 @ 0x1405A81E0 (__asan_load1.c)
 *     __asan_load16 @ 0x1405A8290 (__asan_load16.c)
 *     __asan_load16_volatile @ 0x1405A84C0 (__asan_load16_volatile.c)
 *     __asan_load1_volatile @ 0x1405A86F0 (__asan_load1_volatile.c)
 *     __asan_load2 @ 0x1405A87A0 (__asan_load2.c)
 *     __asan_load2_volatile @ 0x1405A8890 (__asan_load2_volatile.c)
 *     __asan_load4 @ 0x1405A8980 (__asan_load4.c)
 *     __asan_load4_volatile @ 0x1405A8AA0 (__asan_load4_volatile.c)
 *     __asan_load8 @ 0x1405A8BC0 (__asan_load8.c)
 *     __asan_load8_volatile @ 0x1405A8D10 (__asan_load8_volatile.c)
 *     __asan_loadN @ 0x1405A8E60 (__asan_loadN.c)
 *     __asan_loadN_volatile @ 0x1405A8F50 (__asan_loadN_volatile.c)
 *     __asan_memcpy @ 0x1405A9040 (__asan_memcpy.c)
 *     __asan_memset @ 0x1405A9200 (__asan_memset.c)
 *     __asan_store1 @ 0x1405A9570 (__asan_store1.c)
 *     __asan_store16 @ 0x1405A9620 (__asan_store16.c)
 *     __asan_store16_volatile @ 0x1405A9850 (__asan_store16_volatile.c)
 *     __asan_store1_volatile @ 0x1405A9A80 (__asan_store1_volatile.c)
 *     __asan_store2 @ 0x1405A9B30 (__asan_store2.c)
 *     __asan_store2_volatile @ 0x1405A9C20 (__asan_store2_volatile.c)
 *     __asan_store4 @ 0x1405A9D10 (__asan_store4.c)
 *     __asan_store4_volatile @ 0x1405A9E30 (__asan_store4_volatile.c)
 *     __asan_store8 @ 0x1405A9F50 (__asan_store8.c)
 *     __asan_store8_volatile @ 0x1405AA0A0 (__asan_store8_volatile.c)
 *     __asan_storeN @ 0x1405AA1F0 (__asan_storeN.c)
 *     __asan_storeN_volatile @ 0x1405AA2E0 (__asan_storeN_volatile.c)
 *     __asan_wrap_memchr @ 0x1405AA3D0 (__asan_wrap_memchr.c)
 *     __asan_wrap_memcmp @ 0x1405AA4E0 (__asan_wrap_memcmp.c)
 *     __asan_wrap_strcat @ 0x1405AA6A0 (__asan_wrap_strcat.c)
 *     __asan_wrap_strcmp @ 0x1405AA900 (__asan_wrap_strcmp.c)
 *     __asan_wrap_strcpy @ 0x1405AAAA0 (__asan_wrap_strcpy.c)
 *     __asan_wrap_strlen @ 0x1405AAC50 (__asan_wrap_strlen.c)
 *     __asan_wrap_strncmp @ 0x1405AAD40 (__asan_wrap_strncmp.c)
 *     __asan_wrap_strncpy @ 0x1405AAED0 (__asan_wrap_strncpy.c)
 *     __asan_wrap_wcslen @ 0x1405AB080 (__asan_wrap_wcslen.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140319510 (KeStallExecutionProcessor.c)
 *     KcsaniInsertInDatabase @ 0x1405AB7F0 (KcsaniInsertInDatabase.c)
 */

struct _KTHREAD *__fastcall KcsanValidateAddress(struct _LIST_ENTRY *a1, __int64 a2, char a3, char a4, __int64 a5)
{
  struct _KTHREAD *result; // rax
  bool v7; // zf
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int128 v12; // xmm1
  unsigned __int64 KcsanThread; // rcx
  unsigned __int64 v14; // kr00_8
  __int128 v15; // xmm1
  char *v16; // rdi
  signed __int32 v17[8]; // [rsp+0h] [rbp-20h] BYREF
  _OWORD v18[3]; // [rsp+20h] [rbp+0h] BYREF
  _OWORD v19[3]; // [rsp+50h] [rbp+30h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp+70h]
  __int64 v21; // [rsp+90h] [rbp+70h]

  result = (struct _KTHREAD *)KasaniShadow;
  memset(v18, 0, sizeof(v18));
  v7 = *(_BYTE *)(((unsigned __int64)&a1[0x80000000000LL] >> 3) + KasaniShadow) == 8;
  memset(v19, 0, sizeof(v19));
  if ( !v7 )
  {
    v8 = 0LL;
    for ( result = (struct _KTHREAD *)(qword_140FCECB0 + 8);
          v8 < *(_QWORD *)qword_140FCECB0 && (unsigned __int64)a1 >= *(_QWORD *)&result->Header.Lock;
          result = (struct _KTHREAD *)((char *)result + 16) )
    {
      if ( a1 < result->Header.WaitListHead.Flink )
        return result;
      ++v8;
    }
    v9 = 0LL;
    *(_QWORD *)&v18[2] = a5;
    *((_QWORD *)&v18[0] + 1) = a1;
    *(_QWORD *)&v18[1] = a2;
    BYTE8(v18[1]) = a3;
    BYTE9(v18[1]) = a4;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v10 = &unk_140E3EEA8;
      do
      {
        *(_QWORD *)&v19[0] = *(v10 - 5);
        if ( LODWORD(v19[0]) == -1395763731 )
        {
          v11 = *v10;
          v12 = *((_OWORD *)v10 - 1);
          *(_OWORD *)((char *)v19 + 8) = *((_OWORD *)v10 - 2);
          *(_OWORD *)((char *)&v19[1] + 8) = v12;
          *((_QWORD *)&v19[2] + 1) = v11;
          if ( __PAIR64__(DWORD1(v19[0]), -1395763731) == v11
            && *((_QWORD *)&v19[0] + 1) + *(_QWORD *)&v19[1] > *((_QWORD *)&v18[0] + 1)
            && *((_QWORD *)&v18[0] + 1) + *(_QWORD *)&v18[1] > *((_QWORD *)&v19[0] + 1)
            && (BYTE8(v18[1]) || BYTE8(v19[1]))
            && (!BYTE9(v18[1]) || !BYTE9(v19[1]))
            && !_interlockedbittestandset(&KeGetCurrentThread()->ThreadFlags2, 0) )
          {
            KcsaniInsertInDatabase(v18, v19);
            _interlockedbittestandreset(&KeGetCurrentThread()->ThreadFlags2, 0);
          }
        }
        ++v9;
        v10 += 8;
      }
      while ( v9 < (unsigned int)KeNumberProcessors_0 );
    }
    KcsanThread = KeGetCurrentThread()->KcsanThread;
    HIDWORD(v20) = HIDWORD(KcsanThread) + 1;
    LODWORD(v20) = ((_WORD)KcsanThread + 1) & 0x3FF;
    result = (struct _KTHREAD *)v20;
    KeGetCurrentThread()->KcsanThread = v20;
    if ( (((_WORD)KcsanThread + 1) & 0x3FF) == 0 )
    {
      result = KeGetCurrentThread();
      if ( !_interlockedbittestandset(&result->ThreadFlags2, 0) )
      {
        v14 = __readeflags();
        _disable();
        HIDWORD(v21) = HIDWORD(KcsanThread) + 1;
        v15 = *(_OWORD *)((char *)&v18[1] + 8);
        v16 = (char *)&unk_140E3EE80 + 64 * (unsigned __int64)KeGetCurrentPrcb()->Number;
        LODWORD(v21) = -1395763731;
        *(_OWORD *)(v16 + 8) = *(_OWORD *)((char *)v18 + 8);
        *(_OWORD *)(v16 + 24) = v15;
        *(_QWORD *)v16 = v21;
        *((_QWORD *)v16 + 5) = v21;
        KeStallExecutionProcessor(0xAu);
        *(_QWORD *)v16 = 0LL;
        *((_QWORD *)v16 + 5) = 0LL;
        _InterlockedOr(v17, 0);
        *(_OWORD *)(v16 + 8) = 0LL;
        *(_OWORD *)(v16 + 24) = 0LL;
        __writeeflags(v14);
        result = KeGetCurrentThread();
        _interlockedbittestandreset(&result->ThreadFlags2, 0);
      }
    }
  }
  return result;
}
