/*
 * XREFs of Endpoint_SetType @ 0x140081DA4
 * Callers:
 *     Endpoint_Create @ 0x140080F6C (Endpoint_Create.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Endpoint_SetType(__int64 a1)
{
  int v1; // r8d
  __int64 result; // rax

  v1 = 3;
  switch ( *(_BYTE *)(a1 + 99) & 3 )
  {
    case 0:
      break;
    case 1:
      v1 = 1;
      goto LABEL_9;
    case 2:
      v1 = 2;
      goto LABEL_9;
    case 3:
LABEL_9:
      *(_DWORD *)(a1 + 128) = v1;
      goto LABEL_6;
  }
  *(_DWORD *)(a1 + 128) = 0;
  v1 = 0;
LABEL_6:
  if ( *(char *)(a1 + 98) < 0 || !v1 )
  {
    result = (unsigned int)(v1 + 4);
    *(_DWORD *)(a1 + 128) = result;
  }
  return result;
}
