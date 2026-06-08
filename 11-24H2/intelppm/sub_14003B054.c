/*
 * XREFs of sub_14003B054 @ 0x14003B054
 * Callers:
 *     sub_140047614 @ 0x140047614 (sub_140047614.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 */

__int64 __fastcall sub_14003B054(POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS v1; // eax
  unsigned int v2; // ebx
  unsigned __int16 v3; // r9
  __int64 CompletionFilter; // [rsp+28h] [rbp-30h]
  ULONG Disposition; // [rsp+68h] [rbp+10h] BYREF

  Disposition = 0;
  if ( KeyHandle
    || (qword_140021D20 = 0LL,
        ApcRoutine[0] = 0LL,
        qword_140021D18 = (__int64)sub_14000EE00,
        v1 = ZwCreateKey(&KeyHandle, 0xF003Fu, ObjectAttributes, 0, 0LL, 0, &Disposition),
        v2 = v1,
        v1 >= 0) )
  {
    v1 = ZwNotifyChangeKey(KeyHandle, 0LL, (PIO_APC_ROUTINE)ApcRoutine, (PVOID)1, &IoStatusBlock, 5u, 1u, 0LL, 0, 1u);
    v2 = v1;
    if ( v1 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v3 = 11;
      goto LABEL_8;
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v3 = 10;
LABEL_8:
    LODWORD(CompletionFilter) = v1;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, v3, (__int64)&unk_140014B60, CompletionFilter);
  }
  return v2;
}
