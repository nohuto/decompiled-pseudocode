/*
 * XREFs of sub_140007210 @ 0x140007210
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400071A4 @ 0x1400071A4 (sub_1400071A4.c)
 */

struct _LIST_ENTRY *__fastcall sub_140007210(unsigned int a1, char a2, char a3)
{
  struct _LIST_ENTRY *result; // rax
  __int64 v5; // r9
  _DWORD *v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  struct _LIST_ENTRY *Blink; // rdi
  unsigned int *v10; // r10
  unsigned __int64 *v11; // r11
  __int64 v12; // rbx
  _QWORD *v13; // rcx

  result = DeviceObject.Queue.ListEntry.Flink;
  v5 = *((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + a1);
  if ( !v5 )
    return result;
  v6 = *(_DWORD **)(v5 + 368);
  if ( !v6 || !*v6 )
    return result;
  v7 = 3LL;
  if ( !a2 )
  {
    if ( __readmsr(0x38Du) == 819
      && (v8 = __readmsr(0x38Fu),
          ((((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) & 0x700000000LL) == 0x700000000LL) )
    {
      if ( (DeviceObject.DeviceQueue.Type & 0x40) != 0 )
      {
        Blink = DeviceObject.DeviceQueue.DeviceListHead.Blink;
        v10 = (unsigned int *)&unk_140013830;
        v11 = (unsigned __int64 *)(v6 + 8);
        v12 = 3LL;
        do
        {
          result = (struct _LIST_ENTRY *)__readmsr(*v10++);
          *v11 = (unsigned __int64)result & (unsigned __int64)Blink;
          v11 += 3;
          --v12;
        }
        while ( v12 );
        goto LABEL_10;
      }
    }
    else
    {
      *(_DWORD *)&DeviceObject.DeviceQueue.Type &= ~0x40u;
    }
    return (struct _LIST_ENTRY *)sub_1400071A4();
  }
LABEL_10:
  if ( a3 )
  {
    v13 = v6 + 4;
    do
    {
      result = (struct _LIST_ENTRY *)v13[2];
      *v13 = result;
      v13 += 3;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
