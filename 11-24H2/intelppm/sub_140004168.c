/*
 * XREFs of sub_140004168 @ 0x140004168
 * Callers:
 *     sub_140003EE0 @ 0x140003EE0 (sub_140003EE0.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

char __fastcall sub_140004168(__int64 *a1, int a2)
{
  const EVENT_DESCRIPTOR *v2; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int16 v9; // [rsp+38h] [rbp-39h] BYREF
  int v10; // [rsp+3Ch] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  int *v12; // [rsp+58h] [rbp-19h]
  __int64 v13; // [rsp+60h] [rbp-11h]
  _QWORD *v14; // [rsp+68h] [rbp-9h]
  __int64 v15; // [rsp+70h] [rbp-1h]
  char *v16; // [rsp+78h] [rbp+7h]
  __int64 v17; // [rsp+80h] [rbp+Fh]
  char *v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+90h] [rbp+1Fh]
  __int16 *v20; // [rsp+98h] [rbp+27h]
  __int64 v21; // [rsp+A0h] [rbp+2Fh]
  __int64 v22; // [rsp+A8h] [rbp+37h]
  int v23; // [rsp+B0h] [rbp+3Fh]
  int v24; // [rsp+B4h] [rbp+43h]
  __int64 *v25; // [rsp+D8h] [rbp+67h] BYREF

  v25 = a1;
  if ( a2 )
  {
    v2 = (const EVENT_DESCRIPTOR *)&unk_140013040;
    if ( a2 != 1 )
      v2 = &stru_140013050;
  }
  else
  {
    v2 = (const EVENT_DESCRIPTOR *)&unk_140013060;
  }
  LOBYTE(v3) = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v2);
  if ( (_BYTE)v3 )
  {
    *(_QWORD *)&UserData.Size = 8LL;
    UserData.Ptr = (ULONGLONG)&v25;
    LOBYTE(v3) = (_BYTE)v25;
    v10 = 0;
    v4 = *v25;
    if ( *(_BYTE *)(*v25 + 16) )
    {
      v5 = 0LL;
      do
      {
        v6 = (_QWORD *)(*(_QWORD *)(v4 + 24) + 16 * v5);
        v12 = &v10;
        v7 = -1LL;
        v13 = 4LL;
        v15 = 1LL;
        v17 = 1LL;
        v14 = v6 + 1;
        v16 = (char *)v6 + 9;
        v18 = (char *)v6 + 10;
        v19 = 1LL;
        do
          ++v7;
        while ( *(_WORD *)(*v6 + 2 * v7) );
        v9 = v7;
        v20 = &v9;
        v21 = 2LL;
        v22 = *v6;
        v24 = 0;
        v23 = 2 * (unsigned __int16)v7;
        EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, v2, 0LL, 7u, &UserData);
        v5 = (unsigned int)(v10 + 1);
        v10 = v5;
        v4 = *v25;
        v3 = *(unsigned __int8 *)(*v25 + 16);
      }
      while ( (unsigned int)v5 < v3 );
    }
  }
  return v3;
}
