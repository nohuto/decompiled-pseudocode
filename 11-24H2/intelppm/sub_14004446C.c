/*
 * XREFs of sub_14004446C @ 0x14004446C
 * Callers:
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 * Callees:
 *     sub_1400039B0 @ 0x1400039B0 (sub_1400039B0.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

char __fastcall sub_14004446C(__int64 a1)
{
  void *v2; // rdi
  const EVENT_DESCRIPTOR *v3; // rax
  const EVENT_DESCRIPTOR *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  __int64 v9; // rax
  unsigned int v10; // r9d
  _DWORD *v11; // r8
  _DWORD *v12; // rsi
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = 0;
  v18 = 0LL;
  v2 = 0LL;
  v3 = (const EVENT_DESCRIPTOR *)sub_1400039B0(
                                   (ULONG *)a1,
                                   (__int64)&unk_140012EE8,
                                   (__int64)&unk_140012ED8,
                                   (__int64)&v19,
                                   (__int64)&v18);
  v4 = v3;
  if ( v3 )
  {
    LOBYTE(v3) = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v3);
    if ( (_BYTE)v3 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
        qword_140019128,
        *(_QWORD *)(a1 + 208),
        0LL);
      v5 = *(_QWORD *)(a1 + 544);
      if ( !v5
        || (v6 = *(unsigned int *)(v5 + 16),
            Pool2 = ExAllocatePool2(256LL, 16LL * (unsigned int)(2 * v6 + 4), 1919119952LL),
            (UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2) == 0LL) )
      {
LABEL_5:
        LOBYTE(v3) = (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(
                       qword_140019128,
                       *(_QWORD *)(a1 + 208));
        return (char)v3;
      }
      *(_OWORD *)Pool2 = v18;
      *(_DWORD *)(Pool2 + 28) = 0;
      *(_QWORD *)(Pool2 + 16) = v5;
      *(_DWORD *)(Pool2 + 24) = 4;
      *(_DWORD *)(Pool2 + 44) = 0;
      *(_QWORD *)(Pool2 + 32) = v5 + 8;
      *(_DWORD *)(Pool2 + 40) = 8;
      *(_QWORD *)(Pool2 + 48) = v5 + 16;
      *(_QWORD *)(Pool2 + 56) = 4LL;
      if ( (_DWORD)v6 )
      {
        v9 = ExAllocatePool2(256LL, 60 * v6, 1919119952LL);
        v2 = (void *)v9;
        if ( !v9 )
          goto LABEL_12;
        v10 = 0;
        v11 = (_DWORD *)(v9 + 8);
        v12 = (_DWORD *)(v5 + 32);
        do
        {
          v13 = v11 - 2;
          *v13 = *(v12 - 2);
          *(v11 - 1) = *(v12 - 1);
          v14 = 2 * v10 + 4;
          *v11 = *v12;
          v11 += 15;
          v15 = v12[1];
          v12 += 20;
          *(v11 - 14) = v15;
          *(v11 - 13) = *(v12 - 18);
          *(v11 - 12) = *(v12 - 17);
          *(_QWORD *)(v11 - 11) = *((_QWORD *)v12 - 8);
          *(v11 - 9) = *(v12 - 14);
          *((_QWORD *)v11 - 4) = *(_QWORD *)(v12 - 13);
          *(v11 - 6) = *(v12 - 11);
          *(_QWORD *)(v11 - 5) = *((_QWORD *)v12 - 5);
          *(v11 - 3) = *(v12 - 8);
          UserData[v14].Ptr = (ULONGLONG)v13;
          *(_QWORD *)&UserData[v14].Size = 60LL;
          LODWORD(v13) = *((unsigned __int16 *)v12 - 11);
          v16 = 2 * v10++ + 5;
          UserData[v16].Ptr = *((_QWORD *)v12 - 2);
          *(_QWORD *)&UserData[v16].Size = (unsigned int)v13;
        }
        while ( v10 < (unsigned int)v6 );
      }
      EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v4, 0LL, 2 * v6 + 4, UserData);
LABEL_12:
      ExFreePoolWithTag(UserData, 0x72637250u);
      if ( v2 )
        ExFreePoolWithTag(v2, 0x72637250u);
      goto LABEL_5;
    }
  }
  return (char)v3;
}
