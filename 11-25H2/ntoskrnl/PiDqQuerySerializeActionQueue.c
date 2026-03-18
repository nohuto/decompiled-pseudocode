/*
 * XREFs of PiDqQuerySerializeActionQueue @ 0x140837DE4
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x140836400 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x140837A74 (PiDqIrpQueryCreate.c)
 * Callees:
 *     PiDqQueryLock @ 0x1408384AC (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x14083850C (PiDqQueryUnlock.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140838C50 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataCreate @ 0x140838C90 (PiDqActionDataCreate.c)
 *     PiDqActionDataFree @ 0x140838F48 (PiDqActionDataFree.c)
 *     PiDqQueryGetObjectManager @ 0x1408393CC (PiDqQueryGetObjectManager.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqQuerySerializeActionQueue(__int64 a1, __int64 a2, int a3, int *a4, _DWORD *a5)
{
  int v7; // esi
  int v8; // ebx
  struct _ERESOURCE *ObjectManager; // rax
  _QWORD *v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rcx
  int v13; // ebx
  _QWORD v15[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+40h] [rbp-58h] BYREF
  int v17; // [rsp+48h] [rbp-50h]
  int v18; // [rsp+4Ch] [rbp-4Ch]
  PVOID P; // [rsp+50h] [rbp-48h]
  __int64 v20; // [rsp+58h] [rbp-40h]
  PVOID v21; // [rsp+A8h] [rbp+10h] BYREF
  int *v22; // [rsp+B8h] [rbp+20h]

  v22 = a4;
  v7 = 0;
  v15[0] = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v16 = a2;
  v17 = a3;
  v18 = 16;
  P = 0LL;
  PiDqQueryLock(a1);
  v8 = *(_DWORD *)(a1 + 216);
  PiDqQueryUnlock(a1);
  if ( (v8 & 0x20) == 0 )
  {
    ObjectManager = (struct _ERESOURCE *)PiDqQueryGetObjectManager(a1);
    v7 = PiDqObjectManagerEnumerateAndRegisterQuery(ObjectManager);
  }
  if ( v7 < 0 )
  {
LABEL_18:
    *a4 = 0;
    *a5 = 0;
  }
  else
  {
    v7 = MesEncodeIncrementalHandleCreate(&v16, PiDqSerializationAlloc, &PiDqSerializationWrite, v15);
    if ( v7 >= 0 )
    {
      v7 = MesIncrementalHandleReset(v15[0], &v16, 0LL, 0LL, 0LL, *(_DWORD *)(a1 + 216) & 2);
      if ( v7 >= 0 )
      {
        *a4 = v18;
        *a5 = 0;
        PiDqQueryLock(a1);
        v15[1] = a1 + 184;
        v21 = *(PVOID *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = 0LL;
        PiDqQueryUnlock(a1);
        while ( 1 )
        {
          if ( v21 )
          {
            NdrMesTypeEncode3(v15[0], "TP 3\a", &off_1400018C0, &off_140E06FE0, 1, &v21);
            if ( BYTE5(v20) )
            {
              v7 = -1073741819;
              goto LABEL_18;
            }
            if ( BYTE4(v20) )
            {
              PiDqQueryLock(a1);
              *(_QWORD *)(a1 + 184) = v21;
              v21 = 0LL;
              PiDqQueryUnlock(a1);
              *a5 = v20 + 16;
              break;
            }
            *a4 = v18;
            PiDqActionDataFree(v21);
            v21 = 0LL;
          }
          PiDqQueryLock(a1);
          v10 = (_QWORD *)(a1 + 192);
          v11 = *(__int64 **)(a1 + 192);
          if ( v11 == (__int64 *)(a1 + 192) )
          {
            PiDqQueryUnlock(a1);
            break;
          }
          v12 = *v11;
          if ( (_QWORD *)v11[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
            __fastfail(3u);
          *v10 = v12;
          *(_QWORD *)(v12 + 8) = v10;
          --*(_DWORD *)(a1 + 208);
          PiDqQueryUnlock(a1);
          v13 = PiDqActionDataCreate(*(_QWORD *)(a1 + 24), a1 + 32, v11, &v21);
          PiDqQueryActionQueueEntryFree(v11);
          v7 = 0;
          if ( v13 != -1073741772 )
            v7 = v13;
          if ( v7 < 0 )
            goto LABEL_18;
        }
      }
    }
    if ( v7 < 0 )
      goto LABEL_18;
  }
  if ( v21 )
    PiDqActionDataFree(v21);
  if ( P )
    ExFreePoolWithTag(P, 0x58706E50u);
  if ( v15[0] )
    MesHandleFree();
  return (unsigned int)v7;
}
