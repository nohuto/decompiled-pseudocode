/*
 * XREFs of ?SerializeEventHeaderFromApplicationMap@CCaptureNotifier@@AEAAXPEAEK@Z @ 0x180075468
 * Callers:
 *     ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x1800753A4 (-PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCaptureNotifier::SerializeEventHeaderFromApplicationMap(CCaptureNotifier *this, unsigned __int8 *a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // r11d
  __int64 *j; // rax
  int v6; // ecx
  unsigned __int8 v7; // dl
  __int64 v8; // rcx
  __int64 **v9; // rcx
  __int64 *i; // rcx
  __int64 *v11; // rdx

  *(_DWORD *)a2 = 2;
  v3 = 0;
  v4 = 8;
  j = (__int64 *)**((_QWORD **)this + 4);
  while ( !*((_BYTE *)j + 25) )
  {
    if ( *((_DWORD *)j + 8) )
    {
      if ( v3 >= 0x331 )
        break;
      v6 = *((_DWORD *)j + 9);
      v7 = v6 != 0;
      if ( *((_DWORD *)j + 10) )
        v7 = (v6 != 0) + 2;
      v8 = v4;
      v4 += 5;
      ++v3;
      *(_DWORD *)&a2[v8] = *((_DWORD *)j + 7);
      a2[v8 + 4] = v7;
    }
    v9 = (__int64 **)j[2];
    if ( *((_BYTE *)v9 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v11 = *v9;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
        j = v11;
    }
  }
  *((_DWORD *)a2 + 1) = v3;
}
