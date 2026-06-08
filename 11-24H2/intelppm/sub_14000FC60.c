/*
 * XREFs of sub_14000FC60 @ 0x14000FC60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003A78 @ 0x140003A78 (sub_140003A78.c)
 *     sub_14000FF14 @ 0x14000FF14 (sub_14000FF14.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

void __fastcall sub_14000FC60(int a1, void (*a2)(void))
{
  __int64 v3; // rbx
  char v4; // bp
  unsigned __int8 *v5; // rcx
  unsigned int v6; // edi
  ULONG *v7; // r14
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  char v11; // bl
  int v12; // [rsp+20h] [rbp-48h]
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF

  if ( a1 >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2528))(qword_140019128, qword_1400197B8);
    v3 = qword_1400191D8;
    v4 = 0;
    while ( (__int64 *)v3 != &qword_1400191D8 )
    {
      v5 = *(unsigned __int8 **)(v3 + 32);
      *(_DWORD *)(v3 + 20) = *v5;
      v6 = v5[1];
      if ( v6 <= 0x64 )
      {
        if ( !v5[1] )
          v6 = 1;
      }
      else
      {
        v6 = 100;
      }
      if ( v6 != *(_DWORD *)(v3 + 40) )
      {
        v7 = *(ULONG **)(v3 - 40);
        *(_DWORD *)(v3 + 40) = v6;
        v13 = v6;
        v4 = 1;
        sub_140003A78(v7, &stru_140012FF8, &stru_140013008, 4, (__int64)&v13);
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          sub_14000FF14(off_140018050->DeviceExtension, v8, v9, v10, v12, v6, v7[14]);
      }
      v3 = *(_QWORD *)v3;
    }
    v11 = 0;
    if ( v4 )
    {
      LOBYTE(word_1400197CC) = 1;
      if ( !HIBYTE(word_1400197CC) )
      {
        HIBYTE(word_1400197CC) = 1;
        v11 = 1;
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2536))(qword_140019128, qword_1400197B8);
    if ( v11 )
      IoQueueWorkItem(qword_1400197C0, (PIO_WORKITEM_ROUTINE)sub_14000F960, CriticalWorkQueue, 0LL);
  }
  if ( a2 )
    a2();
}
