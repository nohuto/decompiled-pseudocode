/*
 * XREFs of EtwpTraceOpticalIoInit @ 0x14064D270
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     EtwpGetScsiPassThroughCdb @ 0x14064CB04 (EtwpGetScsiPassThroughCdb.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceOpticalIoInit(IRP *a1)
{
  __int64 result; // rax
  char v3; // dl
  int v4; // ecx
  __int16 v5; // r9
  PETHREAD Thread; // rax
  int CurrentRunTime; // ecx
  IRP *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  int v10; // [rsp+3Ch] [rbp-2Ch]
  IRP **v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]

  v10 = 0;
  result = (__int64)a1->Tail.Overlay.CurrentStackLocation;
  v3 = *(_BYTE *)result;
  if ( *(_BYTE *)result == 3 )
    goto LABEL_11;
  if ( v3 == 4 )
    goto LABEL_10;
  if ( v3 != 9 )
  {
    if ( v3 != 14 )
      return result;
    result = (__int64)EtwpGetScsiPassThroughCdb(a1);
    if ( !result )
      return result;
    LOBYTE(v4) = *(_BYTE *)result;
    if ( ((*(_BYTE *)result - 40) & 0x7F) != 0 )
    {
      result = (unsigned int)(v4 - 42);
      if ( (((_BYTE)v4 - 42) & 0x7F) != 0 )
      {
        if ( (_BYTE)v4 != 53 )
          return result;
        goto LABEL_9;
      }
LABEL_10:
      v5 = 315;
      goto LABEL_12;
    }
LABEL_11:
    v5 = 314;
    goto LABEL_12;
  }
LABEL_9:
  v5 = 316;
LABEL_12:
  Thread = a1->Tail.Overlay.Thread;
  v8 = a1;
  if ( Thread )
    CurrentRunTime = Thread[1].CurrentRunTime;
  else
    CurrentRunTime = -1;
  v13 = 0;
  v9 = CurrentRunTime;
  v11 = &v8;
  v12 = 12;
  return EtwTraceKernelEvent((int)&v11, 1, 0x80000002, v5, 6297859);
}
