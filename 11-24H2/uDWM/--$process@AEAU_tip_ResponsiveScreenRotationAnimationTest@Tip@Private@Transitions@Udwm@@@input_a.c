/*
 * XREFs of ??$process@AEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@input_archive@tson@@AEAAXAEAU_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@Z @ 0x1800DF99C
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800E2430 (-deserialize@-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@U.c)
 * Callees:
 *     ??$serialize@Vinput_archive@tson@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1800E004C (--$serialize@Vinput_archive@tson@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transi.c)
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x1800E2294 (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800E23F0 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800E36CC (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::process<Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rdx
  char *v5; // rax
  char v6; // dl
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax

  tson::input_archive::search((tson::input_archive *)a1);
  if ( !*(_BYTE *)(a1 + 25) )
  {
    v5 = *(char **)(*(_QWORD *)a1 + 8LL);
    if ( (unsigned __int64)v5 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
      v6 = 0;
    else
      v6 = *v5;
    if ( v6 == 3 )
    {
      tson::read_buffer::advance(*(tson::read_buffer **)a1);
      v7 = *(_QWORD *)(a1 + 136);
      if ( v7 < 0x19 )
      {
        *(_DWORD *)(a1 + 4 * v7 + 36) = 1;
LABEL_10:
        ++*(_QWORD *)(a1 + 136);
        goto LABEL_12;
      }
    }
    else
    {
      LOBYTE(v4) = 1;
      tson::input_archive::consume_expected_marker(a1, v4, 2147944029LL);
      v8 = *(_QWORD *)(a1 + 136);
      if ( v8 < 0x19 )
      {
        *(_DWORD *)(a1 + 4 * v8 + 36) = 0;
        goto LABEL_10;
      }
    }
    *(_BYTE *)(a1 + 32) = 1;
  }
LABEL_12:
  result = Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest::serialize<tson::input_archive>(
             a2,
             a1);
  if ( !*(_BYTE *)(a1 + 25) )
  {
    v11 = *(_QWORD *)(a1 + 136);
    if ( v11 )
    {
      v12 = v11 - 1;
      *(_QWORD *)(a1 + 136) = v12;
      if ( *(_DWORD *)(a1 + 4 * v12 + 36) == 1 )
      {
        LOBYTE(v10) = 4;
LABEL_18:
        result = tson::input_archive::consume_expected_marker(a1, v10, 2147944029LL);
        goto LABEL_19;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 32) = 1;
    }
    LOBYTE(v10) = 2;
    goto LABEL_18;
  }
LABEL_19:
  *(_BYTE *)(a1 + 25) = 0;
  return result;
}
