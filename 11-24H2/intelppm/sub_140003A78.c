/*
 * XREFs of sub_140003A78 @ 0x140003A78
 * Callers:
 *     sub_140003A40 @ 0x140003A40 (sub_140003A40.c)
 *     sub_14000FC60 @ 0x14000FC60 (sub_14000FC60.c)
 *     sub_140033CF0 @ 0x140033CF0 (sub_140033CF0.c)
 *     sub_14003EAA0 @ 0x14003EAA0 (sub_14003EAA0.c)
 *     WorkerRoutine @ 0x140040AD0 (WorkerRoutine.c)
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 *     sub_14004599C @ 0x14004599C (sub_14004599C.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

char __fastcall sub_140003A78(ULONG *a1, const EVENT_DESCRIPTOR *a2, const EVENT_DESCRIPTOR *a3, int a4, __int64 a5)
{
  ULONG v5; // edi
  ULONG *v7; // rax
  ULONG v11; // [rsp+30h] [rbp-30h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-2Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h]
  int v16; // [rsp+54h] [rbp-Ch]

  v11 = 0;
  v5 = 1;
  ProcNumber = 0;
  LODWORD(v7) = a1[20];
  if ( (_DWORD)v7 == 1 )
  {
    v11 = a1[18];
    UserData.Size = 4;
  }
  else
  {
    if ( (_DWORD)v7 == 2 )
      return (char)v7;
    LODWORD(v7) = KeGetProcessorNumberFromIndex(a1[14], &ProcNumber);
    if ( (int)v7 < 0 )
      return (char)v7;
    a3 = a2;
    LOWORD(v11) = ProcNumber.Group;
    BYTE2(v11) = ProcNumber.Number;
    UserData.Size = 3;
  }
  UserData.Reserved = 0;
  v7 = &v11;
  UserData.Ptr = (ULONGLONG)&v11;
  if ( a3 )
  {
    LOBYTE(v7) = EtwEventEnabled((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, a3);
    if ( (_BYTE)v7 )
    {
      if ( a5 && a4 )
      {
        v16 = 0;
        v5 = 2;
        v14 = a5;
        v15 = a4;
      }
      LOBYTE(v7) = EtwWrite((REGHANDLE)DeviceObject.Queue.ListEntry.Blink, a3, 0LL, v5, &UserData);
    }
  }
  return (char)v7;
}
